#include <stdio.h>
#include <stdlib.h>
void Read_Array(int *gtr, int k)
{
    printf("Enter the Elements in the Array :");
    for (int i = 0; i < k; i++)
    {
        scanf("%d", gtr++);
    }
}
void Sort_Array(int *gtr, int k)
{
    for (int i = 0; i < k - 1; i++)
    {
        int idx = i;
        int smallest = *(gtr + i);
        for (int j = i + 1; j < k; j++)
        {
            if (smallest > *(gtr + j))
            {
                idx = j;
                smallest = *(gtr + j);
            }
        }
        *(gtr + idx) = *(gtr + i);
        *(gtr + i) = smallest;
    }
}
void Display_Array(int *gtr, int k)
{
    for (int i = 0; i < k; i++)
    {
        printf("%d ", *(gtr + i));
    }
}
int main()
{
    int n;
    printf("Enter the No. of Elements : ");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n * 4);
    Read_Array(ptr, n);
    Sort_Array(ptr, n);
    Display_Array(ptr,n);
    return 0;
}