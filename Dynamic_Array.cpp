#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int* arr = new int[n];
    
    srand(time(0));
    
    for(int i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1;
    }
    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    delete[] arr;
    return 0;
}Dynamic Array with Random Number Generation.cpp
