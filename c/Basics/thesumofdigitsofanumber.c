#include <stdio.h>
int main()
{
    int n, l, d, m, x = 0;
    printf("Enter the Number : ");
    scanf("%d", &n);
    while (n > 0)
    {
        d = n % 10;
        n = n / 10;
        x = x + d;
    }
    printf("The sum of digits is %d ", x);
    return 0;
}