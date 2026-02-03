#include <stdio.h>
int main()
{
  int i, j;
  int arr[] = {1, 2, 3, 4, 5, 6, 3};
  for (i = 0; i < 7; i++)
  {
    for ( j = i + 1; j < 7; j++)
    {
      if (arr[i] == arr[j])
      {
        printf("%d is a duplicate Number",arr[i]);
        break;
      }
    }
  }
  return 0 ;
}
