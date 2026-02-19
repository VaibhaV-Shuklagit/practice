#include <stdio.h>
#include <limits.h>
int main()
{
    int r, c;
    int i, j;
    printf("Enter the Number of Rows : ");
    scanf("%d", &r);
    printf("Enter the Number of Columns  : ");
    scanf("%d", &c);
    int arr[r][c];
    int large = INT_MIN;
    int idx;
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
        int sum = 0;
        for (j = 0; j < c; j++)
        {
            sum = sum + arr[i][j];
        }
        if (sum > large)
        {
            large = sum;
            idx = i;
        }
    }
    printf("the row with largest sum in the matrix is %d", idx);
    return 0;
}