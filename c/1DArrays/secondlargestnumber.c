#include <stdio.h>
#include <limits.h>
int main()
{
  int n, i, largest = INT_MIN, j;
  printf("Enter the Number of Elements : ");
  scanf("%d", &n);
  int arr[n];
  for (i = 0; i < n; i++)
  {
    printf("Enter the Element %d : ", i + 1);
    scanf("%d", &arr[i]);
  }
  int secondlargest = largest;
  for (i = 0; i < n; i++)
  {
    if (arr[i] > largest)
    {
      largest = arr[i];
    }
  }
  for (i = 0; i < n; i++)
  {
    if (arr[i] > secondlargest && arr[i] != largest)
    {
      secondlargest = arr[i];
    }
  }
  printf("The Second largest Number in the Array is %d", secondlargest);
  return 0;
}