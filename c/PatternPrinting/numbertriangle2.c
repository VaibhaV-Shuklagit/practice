#include <stdio.h>
int main() {
   int n,i,m,j;
   printf("Enter Number of Rows : ");
   scanf("%d",&n);
   printf("Enter Number of Columns : ");
   scanf("%d",&m); 
   m = 1;
   for(i=1;i<=n;i++){
       for(j=1;j<=i;j++){
           printf("%d ",m);
           m ++ ;
       }printf("\n");
   }
    return 0;
}