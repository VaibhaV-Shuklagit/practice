#include <stdio.h>
int main()
{
    int n, i, m, j;
    printf("Enter The Number  : ");
    scanf("%d", &n);
    j = n;
    for (i = n - 1; i >= 1; i--)
    {
        n = n * i;
    }
    printf("%d ! = %d", j, n);
    return 0;
}