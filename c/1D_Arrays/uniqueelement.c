#include <stdio.h>
#include <stdbool.h>
int main()
{
    int i, j;
    int arr[7] = {1, 2, 3, 4, 3, 2, 1};
    for (i = 0; i < 7; i++)
    {
        bool flag = false;
        for (j = i + 1; j < 7; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
            }
        }
        if (flag == false)
        {
            printf("%d is the unique Number", arr[i]);
            break;
        }
    }
    return 0 ;
}
