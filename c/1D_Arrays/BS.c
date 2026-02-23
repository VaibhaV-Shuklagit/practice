#include <stdio.h>
#include <stdlib.h>
void readarray(int arr[], int n)
{
    int i;
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    int test;
    printf("test cases = ");
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        int n;
        printf("size = ");
        scanf("%d", &n);
        int arr[n];
        // int* arr;
        // arr = (int*)malloc(n*4);
        readarray(arr, n);
        display(arr, n);
        printf("sum = %d\n", sum(arr, n));
    }
    return 0;
}