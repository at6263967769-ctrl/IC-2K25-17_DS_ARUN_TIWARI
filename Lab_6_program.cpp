//number system conversion 
#include <iostream>
using namespace std;

int main() {
    int ch, n, a[32], i = 0;
    char h[] = "0123456789ABCDEF";
    
    cout << "1. Binary\n2. Octal\n3. Hexadecimal\nEnter choice: ";
    cin >> ch;
    cout << "Enter Decimal: ";
    cin >> n;
    
    int base = (ch == 1) ? 2 : (ch == 2) ? 8 : 16;
    
    if(n == 0) { cout << "Result: 0"; return 0; }
    
    while(n > 0) {
        a[i++] = n % base;
        n /= base;
    }
    
    cout << "Result: ";
    while(i > 0) {
        int rem = a[--i];
        cout << (base == 16 ? h[rem] : (char)(rem + '0'));
    }
    
    return 0;
}

input : 1. Binary
        2. Octal
        3. Hexadecimal 
        Enter choice : 1 20
output: Enter Deciaml : Result : 10100
  again
  input : 1. Binary
        2. Octal
        3. Hexadecimal 
        Enter choice : 2 64
output: Enter Deciaml : Result : 100
again
  input : 1. Binary
        2. Octal
        3. Hexadecimal 
        Enter choice : 3 15
output: Enter Deciaml : Result : F
  
