#include <stdio.h>
int combination(int n, int r)
{
    int m = n - r;
    for (int i = n - 1; i >= 1; i--)
    {
        n = n * i;
    }
    for (int i = r - 1; i >= 1; i--)
    {
        r = r * i;
    }
    for (int i = m - 1; i >= 1; i--)
    {
        m = m * i;
    }
    return n / (m * r);
}
int main()
{
    int x, y;
    printf("Enter n : ");
    scanf("%d", &x);
    printf("Enter r : ");
    scanf("%d", &y);
    int nCr = combination(x, y);
    printf("%dC%d = %d", x, y, nCr);
    return 0;
}