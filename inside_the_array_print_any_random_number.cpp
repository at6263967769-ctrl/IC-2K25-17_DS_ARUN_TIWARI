#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    srand(time(0));

    for(int i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1;
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
