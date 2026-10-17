#include <iostream>

using namespace std;

#define max 10
int stack[max];
int s[2];

void initialization() {
    s[0] = -1;
    s[1] = max;
}

void push1(int newel) {
    if (s[0] + 1 == s[1]) {
        cout << "Underflow / Overflow ---\n";
    } else {
        s[0] = s[0] + 1;
        stack[s[0]] = newel;
    }
}

void push2(int newel) {
    if (s[0] + 1 == s[1]) {
        cout << "Overflow ---\n";
    } else {
        s[1] = s[1] - 1;
        stack[s[1]] = newel;
    }
}

int is_full_stack() {
    return (s[0] + 1 == s[1]) ? 1 : 0;
}

int is_empty_stack1() {
    return (s[0] == -1) ? 1 : 0;
}

int is_empty_stack2() {
    return (s[1] == max) ? 1 : 0;
}

int pop1() {
    int delel = -9999;
    if (s[0] == -1) {
        cout << "Underflow---\n";
    } else {
        delel = stack[s[0]];
        s[0] = s[0] - 1;
    }
    return delel;
}

int pop2() {
    int delel = -9999;
    if (s[1] == max) {
        cout << "Underflow---\n";
    } else {
        delel = stack[s[1]];
        s[1] = s[1] + 1;
    }
    return delel;
}

void dispstack1() {
    int i;
    if (s[0] == -1) {
        cout << "Stack is empty\n";
    } else {
        for (i = s[0]; i >= 0; i--) {
            cout << "\n" << stack[i] << "\n";
        }
    }
}

void dispstack2() {
    int i;
    if (s[1] == max) {
        cout << "Stack is empty\n";
    } else {
        for (i = s[1]; i < max; i++) {
            cout << "\n" << stack[i] << "\n";
        }
    }
}

int main() {
    initialization();
    push1(10);
    push1(20);
    push2(30);
    
    cout << "Stack 1 elements:\n";
    dispstack1();
    
    cout << "Stack 2 elements:\n";
    dispstack2();
    
    return 0;
}
