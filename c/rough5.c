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
    for (int i = 1; i < k; i++)
    {
        int j = i;
        while (j > 0 && *(gtr + j - 1) > *(gtr + j))
        {
            int temp = *(gtr + j - 1);
            *(gtr + j - 1) = *(gtr + j);
            *(gtr + j) = temp;
            j -- ;
        }
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
    Display_Array(ptr, n);
    return 0;
}