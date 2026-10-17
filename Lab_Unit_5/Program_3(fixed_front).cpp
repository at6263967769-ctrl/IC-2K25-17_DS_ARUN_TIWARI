/Fixed-front linear queue
#include <iostream>
using namespace std;

class queue {
private:
    int* arr;
    int front, rear, capacity;

public:
    // Initialization
    queue(int cap) {
        capacity = cap;
        arr = new int[capacity];
        front = 0;
        rear = -1;
    }

    // Enqueue
    void enqueue(int x) {
        if (full()) {
            cout << "Overflow" << endl;
            return;
        }

        rear++;
        arr[rear] = x;
        cout << "Inserted: " << x << endl;
    }

    // Dequeue
    void dequeue() {
        if (empty()) {
            cout << "Underflow" << endl;
            return;
        }

        for (int i = front + 1; i <= rear; i++) {
            arr[i - 1] = arr[i];
        }

        rear--;
    }

    // Check empty
    bool empty() {
        return rear == -1;
    }

    // Check full
    bool full() {
        return rear == capacity - 1;
    }

    // Front element
    void front_element() {
        if (empty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Front: " << arr[front] << endl;
    }

    // Display queue
    void display() {
        if (empty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Queue: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~queue() {
        delete[] arr;
    }
};

int main() {
    queue q(10);

    q.enqueue(15);
    q.enqueue(25);
    q.enqueue(35);
    q.enqueue(45);
    q.enqueue(55);
    q.enqueue(65);

    q.display();

    q.dequeue();
    q.dequeue();

    q.display();

    q.enqueue(75);
    q.enqueue(85);
    q.enqueue(95);
    q.enqueue(105);

    q.display();
    q.front_element();

    q.full();
    q.empty();

    return 0;
}
output:
Inserted: 15
Inserted: 25
Inserted: 35
Inserted: 45
Inserted: 55
Inserted: 65
Queue: 15 25 35 45 55 65 
Queue: 35 45 55 65 
Inserted: 75
Inserted: 85
Inserted: 95
Inserted: 105
Queue: 35 45 55 65 75 85 95 105 
Front: 35

// logic
is queue mein front hamesha 0 par fixed rehta hai.
Enqueue operation rear par element insert karta hai.
Dequeue mein first element remove hota hai aur baaki elements ek position left shift hote hain. 
Queue full hone par Overflow aur empty hone par Underflow show hota hai.
