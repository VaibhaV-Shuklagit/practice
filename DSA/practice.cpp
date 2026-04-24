#include <stdio.h>
void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int l = low;
    int r = high;
    while (l <= r)
    {
        while (arr[l] <= pivot && l < high)
        {
            l++;
        }
        while (arr[r] > pivot && r > low)
        {
            r--;
        }
        if (l < r)
        {
            swap(&arr[l], &arr[r]);
        }
    }
    swap(&arr[r], &arr[low]);
    return r;
}
void Quick_Sort(int arr[], int low, int high)
{
    if (low >= high)
        return;
    int part = partition(arr, low, high);
    Quick_Sort(arr, low, part - 1);
    Quick_Sort(arr, part + 1, high);
}
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d ", &arr[i]);
        }
        printf("\n");
        Quick_Sort(arr, 0, n - 1);
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
}