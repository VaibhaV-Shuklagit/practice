#include <stdio.h>
void Sum(int x,int s)
{
    if (x == 0)
    { printf("%d",s);
        return;
    }
    Sum(x - 1,x+s);
    return;
}
int main()
{
    int k;
    printf("Enter the Number = ");
    scanf("%d", &k);
    Sum(k,0);
    return 0;
}