/
#include <stdio.h>
#define MAX 10

int stack[MAX]; 
int top_arr[1]; 

void push(int x) {
    if (top_arr[0] >= MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    top_arr[0]++;
    stack[top_arr[0]] = x;
}

int pop() {
    if (top_arr[0] < 0) {
        printf("Stack Underflow\n");
        return -1;
    }
    int val = stack[top_arr[0]];
    top_arr[0]--;
    return val;
}

void display() {
    printf("Stack elements:\n");
    for (int i = top_arr[0]; i >= 0; i--) {
        printf("%d\n", stack[i]); 
    }
    printf("\n");
}

int main() {
    top_arr[0] = -1;
    
    push(10);
    push(20);
    push(30);
    display();
    
    pop();
    display();
    
    return 0;
}
output:
stack elements:
30
20
10
stack elements:
20
10
