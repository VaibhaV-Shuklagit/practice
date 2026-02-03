#include <stdio.h>
int main()
{
   int n, i, m, j, sum, k, x, d;
   for (i = 1; i <= 500; i++)
   {
      j = i;
      k = j;
      sum = 0;
      while (k >= 1)
      {
         d = k % 10;
         k = k / 10;
         sum = sum + (d * d * d);
         if (sum == j)
            printf("%d\n", j);
      }
   }
   return 0;
}
