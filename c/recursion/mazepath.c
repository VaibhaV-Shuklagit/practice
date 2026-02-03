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
    int a, b, x, y, c;
    printf("Enter the Number of rows : ");
    scanf("%d", &x);
    printf("Enter the Number of columns : ");
    scanf("%d", &y);
    a = fac(x - 1);
    b = fac(y - 1);
    c = fac((x + (y - 2)));
    printf("The Number of Ways to reach to the other Diagonal Corner is %d", c / (a * b));
    return 0;
} // we can only move right and down starting from row 1 and column 1 have to reach column y and row x