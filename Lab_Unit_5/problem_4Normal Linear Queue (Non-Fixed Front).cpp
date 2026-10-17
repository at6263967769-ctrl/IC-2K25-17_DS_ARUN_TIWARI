//Normal Linear Queue (Non-Fixed Front)
#include <iostream>
using namespace std;

class Queue {
private:
    int* arr;
    int front, rear, capacity;

public:
    Queue(int cap) {
        capacity = cap;
        arr = new int[capacity];
        front = 0;
        rear = -1;
    }

    void enqueue(int data) {
        if (rear == capacity - 1) {
            cout << "Queue is full\n";
            return;
        }

        rear++;
        arr[rear] = data;
    }

    void dequeue() {
        if (front > rear) {
            cout << "Queue is empty\n";
            return;
        }

        front++;
    }

    int frontElement() {
        if (front > rear) {
            cout << "Queue is empty\n";
            return -1;
        }

        return arr[front];
    }

    bool isFull() {
        return rear == capacity - 1;
    }

    bool isEmpty() {
        return front > rear;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }

        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~Queue() {
        delete[] arr;
    }
};

int main() {
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    cout << "Front: " << q.frontElement() << endl;

    q.dequeue();

    q.display();

    cout << "Front: " << q.frontElement() << endl;

    return 0;
}
output:
10 20 30
Front: 10
20 30
Front: 20
