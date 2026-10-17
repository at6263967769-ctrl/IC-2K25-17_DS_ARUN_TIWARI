//matrix 2-2
#include <iostream>
using namespace std;
int main() {
   int matrix[3][4] = {
       {1, 2, },
       {5, 6, },
   };
   for (int i = 0; i < 2; i++) { //  rows
       for (int j = 0; j < 2; j++) { // columns
           cout << matrix[i][j] << " ";
       }
       cout << endl;
   }
   return 0;
}

// five valve include

#include <iostream>
using namespace std;
int main() {
   int matrix[3][5] = {
       {1, 2, 5, 9, 5 },
       {5, 6, 5, 7, 6 },
   };
   for (int i = 0; i < 2; i++) { //  rows
       for (int j = 0; j < 5; j++) { // columns
           cout << matrix[i][j] << " ";
       }
       cout << endl;
   }
   return 0;
}

//5-5 matrix


#include <iostream>
using namespace std;
int main() {
   int matrix[5][5] = {
       {1, 2, 5, 9, 5 },
       {5, 6, 5, 7, 6 },
       {6, 64, 6, 64,66 },
       {66, 65, 5, 65, 24 },
       {98, 56, 5, 66, 68 },
   };
   for (int i = 0; i < 5; i++) { //  rows
       for (int j = 0; j < 5; j++) { // columns
           cout << matrix[i][j] << " ";
       }
       cout << endl;
   }
   return 0;
}
