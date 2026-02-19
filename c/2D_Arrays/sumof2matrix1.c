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
    int crr[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
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
            printf("Enter the Element in the Index [%d][%d] = ", i, j);
            scanf("%d", &brr[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }
     for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            crr[i][j] = arr[i][j] + brr[i][j];
        }
    }
    printf("\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", crr[i][j]);
        }
        printf("\n");
    }
    return 0;
}