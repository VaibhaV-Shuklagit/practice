#include <stdio.h>
int main()
{
    int a, b, c;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("a = %d\n", a);
    printf("b = %d", b);
    return 0;
} // here c is a temperorary variable to store a value from already given other variable ;