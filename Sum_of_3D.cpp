#include <iostream>
using namespace std;
int main() {
    int arr[2][2][2] = {{{1, 1}, {1, 1}}, {{1, 1}, {1, 1}}};
    int sum = 0;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                sum += arr[i][j][k];
            }
        }
    }
    cout << "Total 3D Sum: " << sum;
    return 0;
}
