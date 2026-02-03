#include <stdio.h>
int main()
{
    int r1, c1;
    int i, j;
    printf("Enter the Number of Rows of matrix 1 : ");
    scanf("%d", &r1);
    printf("Enter the Number of Columns of matrix 1 : ");
    scanf("%d", &c1);
    int arr[r1][c1];
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
    for (i = 0; i < r1; i++)
    {
        if (i % 2 == 0)
        {
            for (j = 0; j < c1; j++)
            {
                printf("%d ", arr[i][j]);
            }
        }
        else
        {
            for (j = c1 - 1; j >= 0; j--)
            {
                printf("%d ", arr[i][j]);
            }
        }
    }

    return 0;
}
