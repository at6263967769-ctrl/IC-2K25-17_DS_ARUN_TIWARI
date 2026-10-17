
#include <iostream>
using namespace std;
//Declaration & Initialization
int queue[5],
 front = -1,
 rare = -1,
 n = 5;

void enqueue(int val) {
    //IsFull & Insertion 
    if (rare == n - 1) {
        cout << "Queue Overflow!\n";
    } else {
        if (front == -1) front = 0;
        rare++;
        queue[rare] = val;
        cout << "Inserted: " << val << endl;
    }
}

void dequeue() {
    //IsEmpty & Deletion
    if (front == -1 || front > rare) {
        cout << "Queue Underflow!\n";
    } else {
        cout << "Deleted: " << queue[front] << endl;
        front++;
    }
}

void display() {
    //Display(Show Elements)
    if (front == -1 || front > rare) {
        cout << "Queue is Empty!\n";
    } else {
        cout << "Queue elements: ";
        for (int i = front; i <= rare; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    
    display();
    
    dequeue();
    display();
    dequeue();
    display();
    dequeue();
    display();
    dequeue();
    display();

    return 0;
}

