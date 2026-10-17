7 stack in one array
#include <stdio.h>
#define max 21

int s[max];
int top1 = -1, top2 = 2, top3 = 5, top4 = 8, top5 = 11, top6 = 14, top7 = 17;

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
    if(top5 + 1 < top6) {
        top5++;
        s[top5] = x;
    } else {
        printf("Stack 5 Overflow\n");
    }
}

void push6(int x) {
    if(top6 + 1 < top7) {
        top6++;
        s[top6] = x;
    } else {
        printf("Stack 6 Overflow\n");
    }
}

void push7(int x) {
    if(top7 + 1 < max) {
        top7++;
        s[top7] = x;
    } else {
        printf("Stack 7 Overflow\n");
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
    if(top2 >= 2) {
        int val = s[top2];
        top2--;
        return val;
    } else {
        printf("Stack 2 Underflow\n");
        return -1;
    }
}

int pop3() {
    if(top3 >= 5) {
        int val = s[top3];
        top3--;
        return val;
    } else {
        printf("Stack 3 Underflow\n");
        return -1;
    }
}

int pop4() {
    if(top4 >= 8) {
        int val = s[top4];
        top4--;
        return val;
    } else {
        printf("Stack 4 Underflow\n");
        return -1;
    }
}

int pop5() {
    if(top5 >= 11) {
        int val = s[top5];
        top5--;
        return val;
    } else {
        printf("Stack 5 Underflow\n");
        return -1;
    }
}

int pop6() {
    if(top6 >= 14) {
        int val = s[top6];
        top6--;
        return val;
    } else {
        printf("Stack 6 Underflow\n");
        return -1;
    }
}

int pop7() {
    if(top7 >= 17) {
        int val = s[top7];
        top7--;
        return val;
    } else {
        printf("Stack 7 Underflow\n");
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
    for(int i = top5; i >= 12; i--) {
        printf("%d\n", s[i]);
    }
}

void display6() {
    printf("Stack 6:\n");
    for(int i = top6; i >= 15; i--) {
        printf("%d\n", s[i]);
    }
}

void display7() {
    printf("Stack 7:\n");
    for(int i = top7; i >= 18; i--) {
        printf("%d\n", s[i]);
    }
}

int main() {
    push1(10);
    push2(20);
    push3(30);
    push4(40);
    push5(50);
    push6(60);
    push7(70);
    
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

    printf("--- Stack 6 ---\n");
    display6();

    printf("--- Stack 7 ---\n");
    display7();
    
    return 0;
}
