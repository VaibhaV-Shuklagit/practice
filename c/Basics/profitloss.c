#include <stdio.h>
int main()
{
    float s, c, p, l;
    printf("The Selling Price is ");
    scanf("%f", &s);
    printf("The Cost Price is ");
    scanf("%f", &c);
    p = (s - c) * 100 / c;
    l = (c - s) * 100 / c;
    if (p < 0)
    {
        printf("The loss he incurred is %f ", l);
    }
    else
    {
        printf("The profit he gained is %f", p);
    }

    return 0;
}