#include <stdio.h>
void ARRAY(int x[], int n)
{
  int i;
  for (i = 0; i < n; i++)
  {
    if (i % 2 != 0)
    {
      x[i] = x[i] * 2;
    }
    else
      {
        x[i] = x[i] + 10;
      }
  }
  return;
}
int main()
{
  int n, i;
  printf("Number of elements in the array : ");
  scanf("%d", &n);
  int arr[n];
  for (i = 0; i < n; i++)
  {
    printf("Enter the Element %d : ", i + 1);
    scanf("%d", &arr[i]);
  }
  ARRAY(arr, n);
  for (i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  return 0;
} /* if the index of the array is odd then change the value in it to its second multiple and if index is even then change its value by increment
of 10 ;