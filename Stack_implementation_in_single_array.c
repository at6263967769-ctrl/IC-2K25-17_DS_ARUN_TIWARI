#include<stdio.h>
#define max 10
int s[max];

void push(int x)
{
    s[0]++;
    s[s[0]] = x;
}

int pop()
{
    return s[s[0]--];
}

void display()
{
    for(int i = s[0]; i >= 1; i--)
        printf("%d\n", s[i]);
}

int main()
{
    push(10);
    push(20);
    push(30);
    display();
    
    pop();
    display();
}
