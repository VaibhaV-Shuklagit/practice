#include <stdio.h>
void rev(int x[], int n, int k)
  {
    int temp = x[n];
    x[n] = x[k - n];
    x[k - n] = temp;
    return;
  }
int main()
{
  int i, j, n, l, k;
  printf("Enter the Number of rotations : ");
  scanf("%d", &k);
  printf("Enter the Number of elements in the array : ");
  scanf("%d", &n);
  int arr[n];
  if (k > n)
  {
    k = k % n;
  }
  for (i = 0; i < n; i++)
  {
    printf("Enter the Element in Index %d : ", i);
    scanf("%d", &arr[i]);
  }
  for (i = 0; i < n / 2; i++)
  {
    rev(arr, i, n - 1);
  }
  for (i = 0; i < k / 2; i++)
  {
    rev(arr, i, k - 1);
  }
  for (i = k; i < (n + k) / 2; i++)
  {
    rev(arr, i, n + k - 1);
  }
  for (i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  return 0;
} // I did this ;