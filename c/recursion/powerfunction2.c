#include <stdio.h>
int power(int x, int y)
{
    int a, b;
    if (y == 0)
    {
        return 1;
    }
    a = power(x, y / 2);
    if (y % 2 == 0)
    {
        return a * a;
    }
    else
    {
        return x * a * a;
    }
}
int main()
{
    int a, b;
    printf("Enter the Base : ");
    scanf("%d", &a);
    printf("Enter the Power raised to : ");
    scanf("%d", &b);
    printf("%d", power(a, b));
    return 0;
}