#include <stdio.h>

int main() {
    int stack[5], top = -1, val;

    // Push first value
    printf("Enter value 1: ");
    scanf("%d", &val);
    stack[++top] = val;

    // Push second value
    printf("Enter value 2: ");
    scanf("%d", &val);
    stack[++top] = val;

    // Pop values
    printf("Popped: %d\n", stack[top--]);
    printf("Popped: %d\n", stack[top--]);

    return 0;
} 
output 
Enter value 1: 10
Enter value 2: 20
Popped: 20
Popped: 10
