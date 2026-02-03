#include <stdio.h>
#include <limits.h>
int main()
{
    int r, c;
    int i, j;
    int idx1,idx2,idx3,idx4 ;
    printf("Enter the Number of Rows : ");
    scanf("%d", &r);
    printf("Enter the Number of Columns  : ");
    scanf("%d", &c);
    int arr[r][c];
    int large = INT_MIN;
    int Small = INT_MAX;
    for (i = 0; i < r; i++) // number of rows ;
    {
        for (j = 0; j < c; j++) // number of columns ;
        {
            printf("Enter the Element in the Index [%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (arr[i][j] > large)
            {
                large = arr[i][j];
                idx1 = i ;
                idx2 = j ;
            }
            if (arr[i][j] < Small)
            {
                Small = arr[i][j];
                idx3 = i ; 
                idx4 = j ;
            }
        }
    }
    printf("The Smallest Element of the Matrix is %d\n and its Index is [%d][%d]", Small,idx3,idx4);
    printf("The largest Element of the Matrix is %d and its Index is [%d][%d]",large,idx1,idx2);
    ret