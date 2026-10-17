// DecimalToBinary 
#include <iostream>
using namespace std;

int main() {
    int n, a[32], i = 0;
    cout << "Enter Decimal: ";
    cin >> n;
    
    if(n == 0) { cout << "Binary: 0"; return 0; }
    
    while(n > 0) {
        a[i++] = n % 2;
        n /= 2;
    }
    
    cout << "Binary: ";
    while(i > 0) cout << a[--i];
    
    return 0;
}
input - Enter Decimal : 13
  output :- Binary : 1101
  // Decimal to octal
  #include <iostream>
using namespace std;

int main() {
    int n, a[32], i = 0;
    cout << "Enter Decimal: ";
    cin >> n;
    
    if(n == 0) { cout << "Octal: 0"; return 0; }
    
    while(n > 0) {
        a[i++] = n % 8;
        n /= 8;
    }
    
    cout << "Octal: ";
    while(i > 0) cout << a[--i];
    
    return 0;
}
input :- Enter decimal : 64
  octal : 100
  input :- Enter decimal : 65
  octal : 101
// Deciaml to Hexadecimal
  #include <iostream>
using namespace std;

int main() {
    int n, a[32], i = 0;
    char h[] = "0123456789ABCDEF";
    cout << "Enter Decimal: ";
    cin >> n;
    
    if(n == 0) { cout << "Hexadecimal: 0"; return 0; }
    
    while(n > 0) {
        a[i++] = n % 16;
        n /= 16;
    }
    
    cout << "Hexadecimal: ";
    while(i > 0) cout << h[a[--i]];
    
    return 0;
} 
input :- Enter Decimal : 15
  Hexadecimal : F
input :- Enter Decimal : 14
  Hexadecimal : E
  
