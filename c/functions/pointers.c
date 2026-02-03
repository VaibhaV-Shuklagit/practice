#include <stdio.h>
int main()
{
     int a = 9;
    int *x = &a;
    printf("%d\n", a);
    *x = 7;
    printf("%d\n", a);
    int **y = &x;
    **y = 8;
    printf("%p\n", &a);
    printf("%p\n", x);
    printf("%p\n", y);
    printf("%p\n", &x);
    printf("%p\n", *y);
    printf("%d\n", **y); 
    return 0; 
}