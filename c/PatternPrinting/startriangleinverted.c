#include <stdio.h>
int main() {
   int n,i,m,j;
   printf("Enter Number of Rows : ");
   scanf("%d",&n);
   printf("Enter Number of Columns : ");
   scanf("%d",&m);
   for(i=1;i<=n;i++){
       for(j=m;j>=i;j--){
           printf("*");
       }printf("\n");
   }
    return 0;
}