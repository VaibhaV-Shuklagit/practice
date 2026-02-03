#include <stdio.h>
int main()
{
    int x;
    printf("Enter the Number : ");
    scanf("%d", &x);
    int n, i, k = 0, l = 0, j;
    printf("Enter the Number of Elements : ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i] + arr[j] == x && j != i)
            {
                k++;
            }
        }
    }
    printf("The Number of Pairs are %d", k / 2);
    return 0;
} // Find the Number of pairs of elements whose sum is equals to a given integer ;
  