#include <stdio.h>
int main() {
   int n,i,m,j;
   printf("Enter Number of Rows : ");
   scanf("%d",&n);
   printf("Enter Number of Columns : ");
   scanf("%d",&m);
   for(i=1;i<=n;i++){
       for(j=1;j<=m;j++){
           printf("%d",j);
       }printf("\n");
   }
    return 0;
}