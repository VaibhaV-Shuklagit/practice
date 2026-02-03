#include<stdio.h>
int main(){int i,k,m,n,d;
    printf("Enter the Number  : ");
     scanf("%d",&i);
    printf("Enter the Ratio Difference : ");
     scanf("%d",&d);
    for(k = 1; k <= i; k++){
       
         d = d*2;
        printf("%d ",d);
    }
    return 0;
}