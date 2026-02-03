#include <stdio.h>
#include <stdbool.h>
int main()
{
  int n, k;
  int idx = 0;
  bool flag = false; // false means the element is not present ;
  printf("Enter the Number that is to be searched through Array : ");
  scanf("%d", &k);
  printf("Enter the Number of Elements in the Array : ");
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    printf("Enter the Element in Index %d : ", i);
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == k)
    {
      flag = true; // true means the element is present ;
      idx = i;
      break;
    }
  }
  if (flag == true)
  {
    printf("%d is present in the Array and its Index is %d", k, idx);
  }
  else
  {
    printf("%d is not present in the Array", k);
  }
  return 0 ;
} /* ye code toh first index jisme humara number humein mil rha h woh niklne ka tha agr hum code piche se chala de toh last index jisme humara
number present ho skta h woh mil jayega agr humare number ki frequency 1 se zyda h toh 