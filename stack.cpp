#include <iostream>
using namespace std;

#define MAX 100

class Stack {
private:
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    // Add element
    void push(int value) {
        if (top == MAX - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }

        top++;
        arr[top] = value;
    }

    // Remove element
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;
            return;
        }

        cout << "Popped: " << arr[top] << endl;
        top--;
    }

    // Show top element
    void peek() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return;
        }

        cout << "Top element: " << arr[top] << endl;
    }

    // Display stack
    void display() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return;
        }

        cout << "Stack: ";

        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main() {
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);

    st.display();

    st.peek();

    st.pop();

    st.display();

    return 0;
}
