#include <stdio.h>
int fac(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fac(n - 1);
}
int main()
{
    int n;
    printf("Enter the Number of rows: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", fac(i) / (fac(j) * fac(i - j)));
        }
        printf("\n");
    }
    return 0;
}