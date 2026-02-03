#include <stdio.h>
int main()
{
    int i, j, k, l, n, m, sum, d;
    printf("Enter the Number : ");
    scanf("%d", &n);
    m = n % 10;
    while (n > 0)
    {
        d = n % 10;
        n = n / 10;
    }
    sum = d + m;
    printf("The Sum of last and First Digits of the Number is %d", sum);
    return 0;
}