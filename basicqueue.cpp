#include <iostream>
using namespace std;

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

// Push / Enqueue
void push(int value) {
    if (rear == SIZE - 1) {
        cout << "Queue is Full" << endl;
        return;
    }

    if (front == -1)
        front = 0;

    rear++;
    queue[rear] = value;

    cout << value << " pushed" << endl;
}

// Pull / Dequeue
void pull() {
    if (front == -1 || front > rear) {
        cout << "Queue is Empty" << endl;
        return;
    }

    cout << queue[front] << " pulled" << endl;
    front++;
}

int main() {
    push(10);
    push(20);
    push(30);

    pull();
    pull();
    pull();
    pull();

    return 0;
}
