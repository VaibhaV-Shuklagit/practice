#include <stdio.h>
#include <stdlib.h>
void BubbleSort(int *ptr, int n)
{    int* ctr =ptr ;
    for (int i = 0; i < n; i++)
    {   
        ptr = ctr ;
        bool flag = false;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (*(ptr) > *(ptr + 1))
            {
                int temp = *ptr;
                *(ptr) = *(ptr + 1);
                *(ptr + 1) = temp;
                flag = true;
            }
            ptr ++ ;
        }
        if (flag == false)
        {   
            ptr = ctr ;
            return;
        }
    }
    ptr = ctr ;
}
int main()
{
    int t;
    printf("Enter the Number of Test Cases : ");
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        printf("Enter the Number of Elements: ");
        scanf("%d", &n);
        int *ptr = (int *)malloc(n * 4);
        for (int k = 0; k < n; k++)
        {
            printf("Enter the Element in the Index[%d] = ", k);
            scanf("%d",(ptr + k));
        }
        BubbleSort(ptr, n);
        for (int j = 0; j < n; j++)
        {
            printf("%d ", *(ptr + j));
        }
        free(ptr);
        printf("\n");
    }
    return 0;
}