#include <stdio.h>
void Greeting(int x)
{
    if (x == 1)
    {
        printf("Good Morning");
        return;
    }
    printf("Good Morning\n");
    Greeting(x - 1);
    return;
}
int main()
{
    int k;
    printf("Enter the Number = ");
    scanf("%d", &k);
    Greeting(k);
    return 0;
}
