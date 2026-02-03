#include <stdio.h>
int Sum(int x)
{
    if (x == 0)
    {
        return 0;
    }
    int sum = x + Sum(x - 1);
    return (sum);
}
int main()
{
    int k;
    printf("Enter the Number = ");
    scanf("%d", &k);
    int sum = Sum(k);
    printf("%d", sum);
    return 0;
} // ye wla toh khud banaya tha ;