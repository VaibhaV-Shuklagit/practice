#include <stdio.h>
void Num(int x)
{
    if (x == 0)
    {
        return;
    }
    Num(x - 1);
    printf("%d\n",x);
    return;
}
int main()
{
    int k;
    printf("Enter the Number = ");
    scanf("%d", &k);
     Num(k);
    return 0;
}