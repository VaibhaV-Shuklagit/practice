#include <stdio.h>
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
    printf("Enter the Number of elements : ");
    scanf("%d", &n);
    int arr[n];
    int i ;
    for (i = 0; i < n; i++)
    {
        printf("Enter the Element in Index %d : ", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for (i = 1; i <= n - 1; i++)
    {
        int j = i;
        while (arr[j] < arr[j - 1])
        {
            swap(&arr[j-1], &arr[j]);
            j--;
        }
    }

    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}