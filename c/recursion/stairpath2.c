#include <stdio.h>
int stairs(int n)
{
    if (n <= 2)
    {
        return n;
    }
    if (n == 3)
    {
        return 4;
    }
    return stairs(n - 1) + stairs(n - 2) + stairs(n - 3);
}
int main()
{
    int n;
    printf("The Number of Stairs : ");
    scanf("%d", &n);
    printf("The Number of ways to reach at the Top = %d", stairs(n));
    return 0;
} // iss case main hum max 3 steps hi le skte h ek baar main ;