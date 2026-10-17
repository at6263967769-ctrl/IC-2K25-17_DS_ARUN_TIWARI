#include <iostream>
using namespace std;

int main()
{
    char stack[10][20];
    int top = -1;
    int n, i;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:" << endl;

    for(i = 0; i < n; i++)
    {
        top++;
        cin >> stack[top];
    }

    cout << "\nStack elements:" << endl;

    for(i = top; i >= 0; i--)
    {
        cout << stack[i] << endl;
    }

    return 0;
}
Enter number of elements: 3
Enter elements:
Apple
Mango
Banana

Stack elements:
Banana
Mango
Apple
