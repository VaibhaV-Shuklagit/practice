#include <stdio.h>
int main()
{
    int n, i, m, j, sum;
    for (i = 65; i <= 90; i++)
    {
        char ch = (char)i;
        printf("%c -> %d\n", ch, i);
    }
    for (i = 97; i <= 122; i++)
    {
        char ch = (char)i;
        printf("%c -> %d\n", ch, i);
    }
    return 0;
}
// typecasting ka use krna pdega for this program;
