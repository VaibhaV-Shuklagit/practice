#include <stdio.h>
int main()
{
    int n, i, m, j, sum, k, x, d;
    printf("Enter the Number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == j || i + j == n + 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}