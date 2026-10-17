// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int a[20][20], csm[50][3];
    int m, n, i, j, p = 1;

    // Read matrix
    printf("Enter number of rows and columns: ");
    scanf("%d%d", &m, &n);

    printf("Enter matrix elements:\n");

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);

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
    printf("\nSparse Matrix (3-Tuple Representation):\n");
    printf("Row\tColumn\tElement\n");

    for(i = 0; i < p; i++)
    {
        printf("%d\t%d\t%d\n",
               csm[i][0],
               csm[i][1],
               csm[i][2]);
    }

    // Print Original Matrix
    printf("\nOriginal Matrix:\n");

    p = 1;

    for(i = 0; i < csm[0][0]; i++)
    {
        for(j = 0; j < csm[0][1]; j++)
        {
            if(i == csm[p][0] && j == csm[p][1])
            {
                printf("\t%d", csm[p][2]);
                p++;
            }
            else
            {
                printf("\t0");
            }
        }
        printf("\n");
    }

    return 0;
}
