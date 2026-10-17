Queue Using Array ya Queue Implementation in C++
#include <iostream>
using namespace std;

class Queue {
private:
    int* arr;         // Dynamic array
    int front, rear, size, capacity;

public:
    Queue(int cap) {
        capacity = cap;
        size = 0;
        arr = new int[capacity];

        front = 0;
        rear = -1;
    }

    // Destructor to free memory and prevent memory leak
    ~Queue() {
        delete[] arr;
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return rear == capacity - 1;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full." << endl;
            return;
        }

        rear++;
        arr[rear] = value;
        size++;

        cout << value << " inserted into queue." << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Deletion is not possible." << endl;
            return;
        }

        cout << arr[front] << " deleted from queue." << endl;

        front++;
        size--;
    }

    void peek() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }

        cout << "Front element: " << arr[front] << endl;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }

        cout << "Queue elements: ";

        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main() {
    Queue queue(5);

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    cout << endl;

    queue.display();
    queue.peek();

    cout << endl;

    queue.dequeue();
    queue.display();

    return 0;
}
