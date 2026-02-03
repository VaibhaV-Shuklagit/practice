#include <stdio.h>
int main()
{
    int m;
    printf("Enter the Score of the Student : ");
    scanf("%d", &m);

    if (m >= 90)
        printf("A GRADE");
    else if (m >= 80)
        printf("B GRADE");
    else if (m >= 70)
        printf("C GRADE");
    else if (m >= 60)
        printf("D GRADE");
    else if (m >= 50)
        printf("E GRADE");
    else
        printf("FAIL");

    return 0;
}