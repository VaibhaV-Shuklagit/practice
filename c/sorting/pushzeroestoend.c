#include <stdio.h>
void rev(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main()
{
    int k, n, x;
    printf("Enter the Number of Elements : ");
    scanf("%d", &n);
    int arr[n], brr[n];
    printf("Enter the Number of Rotations : ");
    scanf("%d", &k);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the Element in Index %d : ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            brr[idx] = arr[i];
            idx++;
        }
    }
    for (int i = idx; i < n; i++)
    {
        brr[i] = 0;
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", brr[i]);
    }
    return 0;
}