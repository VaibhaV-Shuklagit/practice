#include <stdio.h>
int main()
{
    int n, i, m, j, sum;
    printf("Enter The Number  : ");
    scanf("%d", &n);
    m = 1;
    j = 1;
    for (i = 1; i <= n - 2; i++)
    {
        sum = m + j;
        m = j;
        j = sum;
    }
    printf("The %dth Term of Fibonacci series will be %d", n, sum);
    return 0;
}
// ye loop 2nd term tk output nhi de skta kyuki humne yaha pr nth term n - 2 liya h kyuki 1 , 1 humne a aur b main use krliya lekin humne sum ko 1 liya toh yeh loop 1st aur 2nd term ko bhi 1show krega.
