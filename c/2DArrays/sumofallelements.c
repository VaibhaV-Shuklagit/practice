#include <stdio.h>
int main()
{
    int r, c;
    int i, j;
    int sum = 0;
    printf("Enter the Number of Rows : ");
    scanf("%d", &r);
    printf("Enter the Number of Columns  : ");
    scanf("%d", &c);
    int arr[r][c];
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
            sum = sum + arr[i][j] ;
        }
    }
    printf("%d is the sum of all elements", sum);
    return 0;
}