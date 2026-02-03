#include <stdio.h>
void preInpost(int n)
{
    if (n == 0)
        return;
    printf("Pre %d\n", n);
    preInpost(n - 1);
    printf("In %d\n", n);
    preInpost(n - 1);
    printf("Post %d\n", n);
    preInpost(n - 1);
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
// One of best way to understand recursion by predicting the output of this shit ;