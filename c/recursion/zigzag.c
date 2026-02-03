#include <stdio.h>
void preInpost(int n)
{
    if (n == 0)
        return;
    printf("%d", n);
    preInpost(n - 1);
    printf("%d", n);
    preInpost(n - 1);
    printf("%d", n);
    return;
}
int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);
    preInpost(n);
    return 0;
}