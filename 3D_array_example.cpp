#include <iostream>
using namespace std;
int main() {
    int grid[2][2][2] = {{{0}}}; // All zeros
    for(int i = 0; i < 2; i++) {
        cout << "Layer " << i << ":\n";
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                cout << grid[i][j][k] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
