#include <stdio.h>
int main() {
   int n,i,m,j,sum,k,x,d;
   printf("Enter the Number : ");
   scanf("%d",&n);
    for(i=1;i<=n;i++){ 
    if((n/2) + 1 == i ){
        for(j=1;j<=n;j++){
            printf("*");
        }printf("\n");
    }
    else{
        for(k=1;k<=n;k++){
            if((n/2) + 1 == k){
                printf("*");
            }
            else printf(" ");
        }printf("\n");
    }
    }
    return 0; }