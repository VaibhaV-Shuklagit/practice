#include <stdio.h>
int main()
{
  int n, i, j, k;
  k = 0;
  printf("Enter the Number of Elements of an Array : ");
  scanf("%d", &n);
  int arr[n];
  for (i = 0; i < n; i++)
  {
    printf("Enter the Element %d : ", i + 1);
    scanf("%d", &arr[i]);
  }
  for (i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  for (i = 0; i < n / 2; i++)
  {
    if (arr[i] == arr[n - 1 - i])
    {
      k++;
    }
    else
      break;
  }
  if (k == n / 2)
  {
    printf(": The Given Array is a Palindrome");
  }
  else
    printf(": The Given Array is Not a Palindrome");
  return 0;
}
