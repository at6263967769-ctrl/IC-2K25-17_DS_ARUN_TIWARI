#include <stdio.h>
#define max 15

int s[max];
int top1 = -1, top2 = 3, top3 = 6, top4 = 9, top5 = 12;

void push1(int x) {
    if(top1 + 1 < top2) {
        top1++;
        s[top1] = x;
    } else {
        printf("Stack 1 Overflow\n");
    }
}

void push2(int x) {
    if(top2 + 1 < top3) {
        top2++;
        s[top2] = x;
    } else {
        printf("Stack 2 Overflow\n");
    }
}

void push3(int x) {
    if(top3 + 1 < top4) {
        top3++;
        s[top3] = x;
    } else {
        printf("Stack 3 Overflow\n");
    }
}

void push4(int x) {
    if(top4 + 1 < top5) {
        top4++;
        s[top4] = x;
    } else {
        printf("Stack 4 Overflow\n");
    }
}

void push5(int x) {
    if(top5 + 1 < max) {
        top5++;
        s[top5] = x;
    } else {
        printf("Stack 5 Overflow\n");
    }
}

int pop1() {
    if(top1 >= 0) {
        int val = s[top1];
        top1--;
        return val;
    } else {
        printf("Stack 1 Underflow\n");
        return -1;
    }
}

int pop2() {
    if(top2 >= 3) {
        int val = s[top2];
        top2--;
        return val;
    } else {
        printf("Stack 2 Underflow\n");
        return -1;
    }
}

int pop3() {
    if(top3 >= 6) {
        int val = s[top3];
        top3--;
        return val;
    } else {
        printf("Stack 3 Underflow\n");
        return -1;
    }
}

int pop4() {
    if(top4 >= 9) {
        int val = s[top4];
        top4--;
        return val;
    } else {
        printf("Stack 4 Underflow\n");
        return -1;
    }
}

int pop5() {
    if(top5 >= 12) {
        int val = s[top5];
        top5--; // Yeh pehle top4-- tha, ise top5-- kar diya hai
        return val;
    } else {
        printf("Stack 5 Underflow\n");
        return -1;
    }
}

void display1() {
    printf("Stack 1:\n");
    for(int i = top1; i >= 0; i--) {
        printf("%d\n", s[i]);
    }
}

void display2() {
    printf("Stack 2:\n");
    for(int i = top2; i >= 3; i--) {
        printf("%d\n", s[i]);
    }
}

void display3() {
    printf("Stack 3:\n");
    for(int i = top3; i >= 6; i--) {
        printf("%d\n", s[i]);
    }
}

void display4() {
    printf("Stack 4:\n");
    for(int i = top4; i >= 9; i--) {
        printf("%d\n", s[i]);
    }
}

void display5() {
    printf("Stack 5:\n");
    for(int i = top5; i >= 12; i--) { // 15 ki jagah 12 kiya hai
        printf("%d\n", s[i]);
    }
}

int main() {
    push1(10);
    push1(20);
    
    push2(100);
    push2(200);
    
    push3(500);
    push3(600);

    push4(700);
    push4(800);

    push5(900);
    push5(1000);
    
    printf("--- Stack 1 ---\n");
    display1();
    
    printf("--- Stack 2 ---\n");
    display2();
    
    printf("--- Stack 3 ---\n");
    display3();
    
    printf("--- Stack 4 ---\n");
    display4();

    printf("--- Stack 5 ---\n");
    display5();
    
    return 0;
}
