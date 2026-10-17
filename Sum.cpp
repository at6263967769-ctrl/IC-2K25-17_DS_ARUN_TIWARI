#include <iostream>
using namespace std;
int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for(int i = 0; i < 2; i++) {
        int rowSum = 0;
        for(int j = 0; j < 3; j++) {
            rowSum += arr[i][j];
        }
        cout << "Sum of row " << i << " = " << rowSum << endl;
    }
    return 0;
}
