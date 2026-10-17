#include <iostream>
using namespace std;

int main()
{
    int q[5];
    int front = 0, rear = -1;

    // Insert
    rear++;
    q[rear] = 10;

    rear++;
    q[rear] = 20;

    rear++;
    q[rear] = 30;

    // Display
    cout << "Queue: ";

    for(int i = front; i <= rear; i++)
    {
        cout << q[i] << " ";
    }

    // Delete
    cout << "\nDeleted: " << q[front];
    front++;

    // Display after delete
    cout << "\nQueue after delete: ";

    for(int i = front; i <= rear; i++)
    {
        cout << q[i] << " ";
    }

    return 0;
}
output:-
Queue: 10 20 30
Deleted: 10
Queue after delete: 20 30
