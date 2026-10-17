// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
    int a[20][20], csm[50][3];
    int m, n, i, j, p = 1;

    // Read matrix
    cout << "Enter number of rows and columns: ";
    cin >> m >> n;

    cout << "Enter matrix elements:" << endl;

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            cin >> a[i][j];

            if(a[i][j] != 0)
            {
                csm[p][0] = i;
                csm[p][1] = j;
                csm[p][2] = a[i][j];
                p++;
            }
        }
    }

    // Header
    csm[0][0] = m;
    csm[0][1] = n;
    csm[0][2] = p - 1;

    // Print Sparse Matrix
    cout << "\nSparse Matrix (3-Tuple Representation):" << endl;
    cout << "Row\tColumn\tElement" << endl;

    for(i = 0; i < p; i++)
    {
        cout << csm[i][0] << "\t"
             << csm[i][1] << "\t"
             << csm[i][2] << endl;
    }

    // Print Original Matrix
    cout << "\nOriginal Matrix:" << endl;

    p = 1;

    for(i = 0; i < csm[0][0]; i++)
    {
        for(j = 0; j < csm[0][1]; j++)
        {
            if(i == csm[p][0] && j == csm[p][1])
            {
                cout << "\t" << csm[p][2];
                p++;
            }
            else
            {
                cout << "\t0";
            }
        }
        cout << endl;
    }
output: 
Enter number of rows and columns: 3 3
Enter matrix elements:
0 5 0
0 0 8
3 0 0

Sparse Matrix (3-Tuple Representation):
Row	Column	Element
3	3	3
0	1	5
1	2	8
2	0	3

Original Matrix:
	0	5	0
	0	0	8
	3	0	0

    return 0;
}
