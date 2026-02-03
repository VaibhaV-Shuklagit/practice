#include <stdio.h>
int main()
{
    int x;
    printf("Enter the Number : ");
    scanf("%d", &x);
    if ((x % 3 == 0 || x % 5 == 0) && x % 15 != 0)
    {
        printf("The number %d is divisible by 3 or 5 but not by 15 ", x);
    }
    if ((x % 3 == 0 || x % 5 == 0) && x % 15 == 0)
    {
        printf("The number %d is divisible by 3 or 5 and by 15 also ", x);
    }
    return 0;
}