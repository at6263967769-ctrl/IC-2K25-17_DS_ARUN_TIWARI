//stack strating operation program
#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    
    s.push(8);
    s.push(10);
    s.push(12);
    
    cout << "top operation ?" << s.top() <<endl;
    
    s.pop();
    
    cout << "top operation again ?" << s.top() <<endl;
    
    return 0;
}

//LIFO
#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    
    s.push(8);
    s.push(10);
    s.push(12);
    s.push(14);
    s.push(16);
    s.push(18);
    s.push(20);
    
    cout << "top operation 1 ?" << s.top() <<endl;
    
    s.pop();
    
    cout << "top operation 2 ?" << s.top() <<endl;

    s.pop();

    cout << "top operation 3 ?" << s.top() <<endl;

    s.pop();

    cout << "top operation 4  ?" << s.top() <<endl;
    
    s.pop();
    
    cout << "top operation 5 ?" << s.top() <<endl;

    s.pop();

    cout << "top operation 6 ?" << s.top() <<endl;

    s.pop();

    cout << "top operation 7 ?" << s.top() <<endl;

    s.pop();
    
     return 0;
}
