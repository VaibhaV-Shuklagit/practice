#include <stdio.h>
int main()
{
    int k = 10;
    printf("%d %d %d ", (k == 10, k = 5), k < 10);
    return 0;
}
