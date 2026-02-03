#include <stdio.h>
int powe(int x, int y, int p)
{
    if (p == y)
    {
        return x;
    }
    int power = x * powe(x, y, p + 1);
    return power;
}
int main()
{
    int x, y;
    printf("Enter the Base = ");
    scanf("%d", &x);
    printf("Enter the Exponent = ");
    scanf("%d", &y);
    int power = powe(x, y, 1);
    printf("%d", power);
} // ye maine hi banaya h ;

           // OR


/* #include <stdio.h>
int powe(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    int power = x * powe(x, y-1);
    return power;
}
int main()
{
    int x, y;
    printf("Enter the Base = ");
    scanf("%d", &x);
    printf("Enter the Exponent = ");
    scanf("%d", &y);
    int power = powe(x, y);
    printf("%d", power);
} // ye wala sir ne banaya tha ;