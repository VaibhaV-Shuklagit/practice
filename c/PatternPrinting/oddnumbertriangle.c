#include <stdio.h>
int main()
{
    int n, i, m, j;
    printf("Enter Number of Rows : ");
    scanf("%d", &n);
    printf("Enter Number of Columns : ");
    scanf("%d", &m);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2 * i - 1; j = j + 2)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}