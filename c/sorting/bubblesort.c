#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the Element in the Index %d : ",i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]); 
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]); 
    }
    return 0;
}
