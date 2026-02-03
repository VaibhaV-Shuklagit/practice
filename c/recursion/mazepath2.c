#include <stdio.h>
int ways(int x, int y)
{
    if (x == 1 || y == 1)
    {
        return 1;
    }
    int totalways = ways(x - 1, y) + ways(x, y - 1);
    return totalways;
}
int main()
{
    int r, c;
    printf("Enter the Number of rows : ");
    scanf("%d", &r);
    printf("Enter the Number of columns : ");
    scanf("%d", &c);
    printf("%d are the total number of ways", ways(r, c));
    return 0;
}