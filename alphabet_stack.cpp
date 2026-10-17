//alphabet_stack.cpp
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<char> s;

    s.push('A');
    s.push('B');
    s.push('C');

    cout << "Top element: " << s.top() << endl;

    cout << "\nStack se bahar nikalne wale alphabets:\n";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
output 
Top element: C

Stack se bahar nikalne wale alphabets:
C B A
