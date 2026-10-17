traditional array
//c style in cpp without std:: vector
#include <iostream>
using namespace std;

int main() {
    char arr[] = {'a', 'b', 'c', 'd', 'e'};

    cout << "Size of arr[0]: " << sizeof(arr[0])
    << endl;

    cout << "Size of arr: " << sizeof(arr) << endl;

    return 0;
}




// wrong output program

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<char> arr = {'a', 'b', 'c', 'd', 'e'};

    cout << "Size of arr[0]: " << sizeof(arr[0])
    << endl;

    cout << "Size of arr: " << sizeof(arr) << endl;

    return 0;
}

output 
1 24 24

//single element and size of array

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<char> arr = {'a', 'b', 'c', 'd', 'e'};
    
    cout << "Size of arr[0]: " << sizeof(arr[0])
    << endl;

   

    int n = arr.size(); 

    cout << "Length of vector: " << n << endl; 

    return 0;
}

1
5

// single element size

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<char> arr = {'a', 'b', 'c', 'd', 'e'};

    cout << "Size of arr[0]: " << sizeof(arr[0]) << endl;

    
    return 0;
}

output 1

//total element array size

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<char> arr = {'a', 'b', 'c', 'd', 'e'};
    
    cout << "Size of arr elements: " << sizeof(arr[0]) * arr.size() << endl;


    return 0;
}
output 5




