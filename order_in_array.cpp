#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    bool isSorted = true;
    
    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            isSorted = false;
            break;
        }
    }
    
    if(isSorted) {
        cout << "Array sorted hai!" << endl;
    } else {
        cout << "Array sorted nahi hai!" << endl;
    }
    
    return 0;
}

input-
  5
  10 20 14 47 58
  array sorted nahi hai output
