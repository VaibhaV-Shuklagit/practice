#include <stdio.h>
int main()
{
  int n, a, b, c, d, m, sum, x, i, j;
  printf("Enter the Number of Rows : ");
  scanf("%d", &m);
  x = 1;
  for (i = 1; i <= m; i++)
  {
    for (n = 1; n <= m - i; n++)
    {
      printf(" ");
    }
    for (j = 1; j <= x; j++)
    {
      printf("*");
    }
    x = x + 2;
    printf("\n");
  }
  return 0;
} // Iss question main actually main humein pehle wle no. of spaces pr dhyan dena h piche wle spaces ko print krwane ki zrurt nhi h ;