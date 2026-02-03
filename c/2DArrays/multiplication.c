#include <stdio.h>
int main()
{
    int r1, c1;
    int i, j;
    int r2, c2;
    printf("Enter the Number of Rows of matrix 1 : ");
    scanf("%d", &r1);
    printf("Enter the Number of Columns of matrix 1 : ");
    scanf("%d", &c1);
    printf("Enter the Number of Rows of matrix 2 : ");
    scanf("%d", &r2);
    printf("Enter the Number of Columns of matrix 2 : ");
    scanf("%d", &c2);
    int arr[r1][c1];
    int brr[r2][c2];
    int crr[r1][c2];
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("Enter the Element in the Index [%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("Enter the Element in the Index [%d][%d] = ", i, j);
            scanf("%d", &brr[i][j]);
        }
    }
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }
    if (c1 == r2)
    {
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                int sum = 0;
                for (int k = 0; k < c1; k++)
                {
                    sum = sum + arr[i][k] * brr[k][j];
                }
                crr[i][j] = sum;
            }
        }
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d ", crr[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("The Matrices cannot be Multiplied");
    return 0;
}
