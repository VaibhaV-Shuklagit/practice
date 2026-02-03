#include <stdio.h>
int main()
{
    int n, i, m, j, sum;
    printf("Enter The base  : ");
    scanf("%d", &m);
    printf("Enter the Exponent : ");
    scanf("%d", &n);
    j = 1;
    for (i = 1; i <= n; i++)
    {
        j = j * m;
    }
    printf("%d", j);
    return 0;
}