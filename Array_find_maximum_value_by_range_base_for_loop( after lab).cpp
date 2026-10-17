#include <iostream>

int main() {
    int a[] = {3, 7, 2, 9, 5};
    int maxVal = a[0];

    for (int x : a)
        if (x > maxVal) maxVal = x;

    std::cout << "Max value: " << maxVal << '\n';
    return 0;

    output:- 9
