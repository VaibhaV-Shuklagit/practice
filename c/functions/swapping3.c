#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main()
{
    int i, j, k, l, n;
    i = 5;
    j = 7;
    printf("i = %d\n", i);
    printf("j = %d\n", j);
    swap(&i, &j);
    printf("i = %d\n", i);
    printf("j = %d", j);
    return 0;
}