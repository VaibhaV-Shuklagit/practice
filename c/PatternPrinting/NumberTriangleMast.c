#include <stdio.h>
int main()
{
    int i, j, k, n, nsp, nst, a;
    printf("Enter the Numbers of Lines : ");
    scanf("%d", &n);
    nst = 1;
    nsp = n - 1;
    for (i = 1; i <= n; i++)
    {
        a = 1;
        for (k = 1; k <= nsp; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= nst; j++)
        {
            if (j >= i)
            {
                printf("%d", a);
                a--;
            }
            else
            {
                printf("%d", a);
                a++;
            }
        }
        nst = nst + 2;
        nsp--;
        printf("\n");
    }
    return 0;
}