#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers = {4, 7, 12, 19, 22, 33, 40};
    
    int evenCount = 0;
    int oddCount = 0;
    
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    
    cout << "Total Even numbers: " << evenCount << endl;
    cout << "Total Odd numbers: " << oddCount << endl;
    
    return 0;
}
output-
  Total Even numbers: 3
  Total Odd numbers: 4
