#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter the Number x : ");
    scanf("%d", &x);
    printf("Enter the Number y : ");
    scanf("%d", &y);
    printf("Enter the Number z : ");
    scanf("%d", &z);
    if (x < y + z && y < z + x && z < x + y)
    {
        printf("%d %d %d can make a Triangle", x, y, z);
    }
    else
    {
        printf("%d %d %d cannot form a Triangle", x, y, z);
    }
    return 0;
}