// Array basic program 
#include <iostream>
#include <stack> 
using namespace std;

int main() {
    stack<string> s; 

    if (s.empty()) {
        cout << "starting !\n\n";
    }

    s.push("C++");
    s.push("Java");
    s.push("Python"); 

    cout << "Stack element? " << s.size() << endl; 


    cout << " stack 1 ? " << s.top() << endl; 

    s.pop();

    cout << " stack 2 ? " << s.top() << endl;

    s.pop();

     cout << " stack 3 ? " << s.top() << endl;

    s.pop();

    cout << " stack element again check? " << s.size() << endl; 

    return 0;
}
// stack implementation when size fix in array
#include <iostream>
using namespace std;

class MyStack {
private:
    int arr[5];
    int top;

public:
    MyStack() {
        top = -1;
    }

    void push(int val) {
        if (top == 4) {
            cout << "Stack Full (Overflow)! " << val << " nahi dal sakte.\n";
            return;
        }
        
        top++;
        arr[top] = val;
        cout << val << " stack me push ho gaya.\n";
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Khali (Underflow)! Kuch bhi pop nahi ho sakta.\n";
            return;
        }
        
        cout << arr[top] << " stack se pop ho gaya.\n";
        top--;
    }

    int peek() {
        if (top == -1) {
            cout << "Stack khali hai!\n";
            return -1;
        }
        return arr[top];
    }

    bool isEmpty() {
        return (top == -1);
    }
};

int main() {
    MyStack s;

    if (s.isEmpty()) {
        cout << "starting stack khali hai.\n\n";
    }

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "\n starting top ? " << s.peek() << endl;

    s.pop();

    cout << "Pop operation afer what is tha top? " << s.peek() << endl;

    return 0;
}
output 
starting stack khali hai.

10 stack me push ho gaya.
20 stack me push ho gaya.
30 stack me push ho gaya.

 starting top ? 30
30 stack se pop ho gaya.
Pop operation afer what is tha top? 20

// Stack implementation in which array size fix but we add tha extra element
#include <iostream>
using namespace std;

class MyStack {
private:
    int arr[5];
    int top;

public:
    MyStack() {
        top = -1;
    }

    void push(int val) {
        if (top == 4) {
            cout << "Stack Full (Overflow)! " << val << " nahi dal sakte.\n";
            return;
        }
        
        top++;
        arr[top] = val;
        cout << val << " stack me push ho gaya.\n";
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Khali (Underflow)! Kuch bhi pop nahi ho sakta.\n";
            return;
        }
        
        cout << arr[top] << " stack se pop ho gaya.\n";
        top--;
    }

    int peek() {
        if (top == -1) {
            cout << "Stack khali hai!\n";
            return -1;
        }
        return arr[top];
    }

    bool isEmpty() {
        return (top == -1);
    }
};

int main() {
    MyStack s;

    if (s.isEmpty()) {
        cout << "starting stack khali hai.\n\n";
    }

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    cout << "\n starting top ? " << s.peek() << endl;

    s.pop();

    cout << "Pop operation afer what is tha top? " << s.peek() << endl;

    return 0;
}
output:
starting stack khali hai.

10 stack me push ho gaya.
20 stack me push ho gaya.
30 stack me push ho gaya.
40 stack me push ho gaya.
50 stack me push ho gaya.
Stack Full (Overflow)! 60 nahi dal sakte.

 starting top ? 50
50 stack se pop ho gaya.
Pop operation afer what is tha top? 40

// Stack implementation in which when tha vector condtion  
//why we use becaues we add tha extra element without error so we use vector because they automaticly add inside tha memory
#include <iostream>
#include <vector>
using namespace std;

class MyStackVector {
private:
    vector<int> arr;  
    int top;
public:
    MyStackVector() {
        top = -1;
    }
    void push(int val) {
        arr.push_back(val);  
        top++;
        cout << val << " push ho gaya. (Size: " << arr.size() << ")\n";
    }
    void pop() {
        if (top == -1) {
            cout << "Underflow!\n";
            return;
        }
        arr.pop_back();
        cout << "Pop ho gaya!\n";
        top--;
    }
};

int main() {
    MyStackVector s;
    s.push(10);  
    s.push(20);  
    s.push(30);  
    s.push(40); 
    s.push(50);  
    s.push(60);  
    s.push(70);
    s.push(80);  
    s.push(90);  
    s.push(100);  
    s.push(110); 
    s.push(120);  
    s.push(130);  
    s.push(140); 
    s.push(150);  
    s.push(160);  
    s.push(170);  
    s.push(180); 
    s.push(190);  
    s.push(200);  
    s.push(210);  
     
      
    
    return 0;
}
output:
10 push ho gaya. (Size: 1)
20 push ho gaya. (Size: 2)
30 push ho gaya. (Size: 3)
40 push ho gaya. (Size: 4)
50 push ho gaya. (Size: 5)
60 push ho gaya. (Size: 6)
70 push ho gaya. (Size: 7)
80 push ho gaya. (Size: 8)
90 push ho gaya. (Size: 9)
100 push ho gaya. (Size: 10)
110 push ho gaya. (Size: 11)
120 push ho gaya. (Size: 12)
130 push ho gaya. (Size: 13)
140 push ho gaya. (Size: 14)
150 push ho gaya. (Size: 15)
160 push ho gaya. (Size: 16)
170 push ho gaya. (Size: 17)
180 push ho gaya. (Size: 18)
190 push ho gaya. (Size: 19)
200 push ho gaya. (Size: 20)
210 push ho gaya. (Size: 21)
//13/08/2026
