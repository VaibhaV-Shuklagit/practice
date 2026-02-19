#include <stdio.h>
int main()
{
   int x;
   printf("Enter the Number : ");
   scanf("%d", &x);
   if (x < 0)
   {
      printf("The Absolute Value of the Number %d is : %d", x, -x);
   }
   else
   {
      printf("The Absolute value of %d is %d", x, x);
   }
}
