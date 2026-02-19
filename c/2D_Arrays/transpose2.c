#include <stdio.h>
int main()
{
    int r, c;
    int i, j;
    printf("Enter the Number of Rows : ");
    scanf("%d", &r);
    printf("Enter the Number of Columns  : ");
    scanf("%d", &c);
    int arr[r][c];
    int brr[r][c];
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
    printf("\n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}