#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of Array : ");
    scanf("%d", &n);
    int arr[n], i;
    for (i = 0; i < n; i++)
    {
        printf("Enter the Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    int pro = 1;
    for (i = 0; i < n; i++)
    {
        pro = pro * arr[i];
    }
    printf("%d", pro);
    return 0;
}
