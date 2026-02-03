#include <stdio.h>
int stairs(int n)
{
    if (n <= 2)
    {
        return n;
    }
    return stairs(n - 1) + stairs(n - 2);
}
int main()
{
    int n;
    printf("The Number of Stairs : ");
    scanf("%d", &n);
    printf("The Number of ways to reach at the Top = %d", stairs(n));
    return 0;
} // iss case hum main hum max 2 steps hi ek baar main le skte h ;
