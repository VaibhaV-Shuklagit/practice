#include <stdio.h>
int main()
{
    int i, j, n, m, k, nst, nsp;
    printf("The Number of Lines : ");
    scanf("%d", &n);
    nst = 1;
    nsp = n / 2;
    for (i = 1; i <= n; i++)
    {
        if (i >= (n / 2 + 1))
        {
            for (k = 1; k <= nsp; k++)
            {
                printf(" ");
            }
            for (j = 1; j <= nst; j++)
            {
                printf("*");
            }
            nsp++;
            nst -= 2;
        }
        else
        {
            for (k = 1; k <= nsp; k++)
            {
                printf(" ");
            }
            for (j = 1; j <= nst; j++)
            {
                printf("*");
            }
            nsp--;
            nst += 2;
        }
        printf("\n");
    }
    return 0;
}