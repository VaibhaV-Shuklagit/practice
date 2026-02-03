#include <stdio.h>
#include <limits.h>
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);
    int arr[n];
    int i, j;
    for (i = 0; i < n; i++)
    {
        printf("Enter the Element in the Index %d : ", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        int x;
        int min = INT_MAX;
        for (j = i; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                x = j ;
            }
        }
        swap(&arr[i], &arr[x]);
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}