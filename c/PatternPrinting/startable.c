#include<stdio.h>
int main(){
    int i,j,n,m,k,nst,nsp,l,v;
    printf("The Number of rows : ");
    scanf("%d",&n);
    nsp = 1 ;
    nst = n - 1;
    for(i=1;i<=2*n - 1 ;i++){
        printf("*");
    } 
    printf("\n");
    for(j = 1;j <=n-1;j++){
        for(k=1;k<=nst;k++){
            printf("*");
        }
        for(l=1;l<=nsp;l++){
            printf(" ");
        }
        for(v=1;v<=nst;v++){
            printf("*");
        }
        nst-- ;
        nsp+=2 ;
        printf("\n");
    }
    return 0 ;
}