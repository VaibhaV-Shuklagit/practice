#include <stdio.h>
int main()
{
    int n, sum;
    printf("Enter the Electricity Bill in terms of unit : ");
    scanf("%d", &n);
    if (n <= 100)
    {
        sum = n * 5;
    }
    else if (n <= 200)
    {
        sum = 500 + (n - 100) * 7;
    }
    else if (n > 200)
    {
        sum = 1200 + (n - 200) * 10;
    }
    printf("The total bill is : %d", sum);
} /* Q: Input electricity units and calculate the bill based on slabs : first 100 -> $5/unit ,Next 100 -> $7/unit, Above 200->$10/unit using 
if-else-if ladder.