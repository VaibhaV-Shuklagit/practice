#include <stdio.h>
int main()
{
    int x;
    printf("Enter the Number : ");
    scanf("%d", &x);
    int n, i, k = 0, l, j;
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
        for (j = i + 1; j < n; j++)
        {
            for (l = j + 1; l < n; l++)
            {
                if (arr[i] + arr[j] + arr[l] == x)
                {
                    k++;
                }
            }
        }
    }
    printf("The Number of Pairs are %d", k);
    return 0;
} // triplets