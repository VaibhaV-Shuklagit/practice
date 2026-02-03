#include <stdio.h>
#include <limits.h>
int main()
{
    int n, max = INT_MIN, smax = INT_MIN;
    printf("enter number of elements in array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            smax = max;
            max = arr[i];
        }
        else if (smax < arr[i] && max != arr[i])
            smax = arr[i];
    }
    printf("%d", smax);
    return 0;
}