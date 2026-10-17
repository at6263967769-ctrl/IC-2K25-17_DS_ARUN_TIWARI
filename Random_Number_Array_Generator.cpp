#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i = 0; i < n; i++) 
        cout << (arr[i] = rand() % 100 + 1) << " ";
        
    return 0;
}
