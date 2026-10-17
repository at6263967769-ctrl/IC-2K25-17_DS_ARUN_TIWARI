//circular queue
#include <iostream>
using namespace std;

class cir_queue {
private:
    int* arr;
    int front, rear, capacity, nf, nr;

public:
    // Initialization
    cir_queue(int cap) {
        capacity = cap;
        arr = new int[capacity];
        front = 0;
        rear = -1;
    }

    int cal_nr() {
        return (rear + 1) % capacity;
    }

    int cal_nf() {
        return (front + 1) % capacity;
    }

    // Insert element
    void enqueue(int x) {
        if (full()) {
            cout << "Queue is full" << endl;
            return;
        }

        nr = cal_nr();
        arr[nr] = x;
        rear = nr;

        cout << "Inserted: " << x << endl;
    }

    // Remove element
    void dequeue() {
        if (empty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Removed: " << arr[front] << endl;

        if (front == rear) {
            front = 0;
            rear = -1;
        } else {
            nf = cal_nf();
            front = nf;
        }
    }

    // Check empty queue
    bool empty() {
        return rear == -1;
    }

    // Check full queue
    bool full() {
        return rear != -1 && cal_nr() == front;
    }

    // Show front element
    void front_element() {
        if (empty())
            cout << "Queue is empty" << endl;
        else
            cout << "Front element: " << arr[front] << endl;
    }

    // Display queue
    void display() {
        if (empty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Queue: ";
        int i = front;

        while (true) {
            cout << arr[i] << " ";

            if (i == rear)
                break;

            i = (i + 1) % capacity;
        }

        cout << endl;
    }

    ~cir_queue() {
        delete[] arr;
    }
};

int main() {
    cir_queue cq(10);

    cq.enqueue(15);
    cq.enqueue(25);
    cq.enqueue(35);
    cq.enqueue(45);
    cq.enqueue(55);
    cq.enqueue(65);

    cq.display();

    cq.dequeue();
    cq.dequeue();

    cq.display();

    cq.enqueue(75);
    cq.enqueue(85);
    cq.enqueue(95);
    cq.enqueue(105);

    cq.display();
    cq.front_element();

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
Removed: 15
Removed: 25
Queue: 35 45 55 65 
Inserted: 75
Inserted: 85
Inserted: 95
Inserted: 105
Queue: 35 45 55 65 75 85 95 105 
Front element: 35

 //logic : 
## Circular Queue in C++

### Logic
1. Initialize the queue with a fixed capacity of 10.
2. Set `front = 0` and `rear = -1`.
3. In `enqueue()`, check whether the queue is full. If not, insert the element at the next rear position.
4. In `dequeue()`, check whether the queue is empty. If not, remove the front element.
5. Use modulo (`%`) to move the front and rear circularly within the array.
6. In `display()`, print all elements from front to rear.
7. Release dynamically allocated memory using the destructor.

### Key Conditions
- **Empty Queue:** `rear == -1`
- **Full Queue:** `rear != -1 && (rear + 1) % capacity == front`
- **Circular Movement:** `(index + 1) % capacity`

### Operations
- Enqueue — Insert an element
- Dequeue — Remove an element
- Display — Show queue elements
- Front — Show the first element
