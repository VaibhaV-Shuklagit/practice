#include<stdio.h>
int main(){
    int i,j,n,m,k,nst,nsp;
    printf("The Number of Lines : ");
    scanf("%d",&n);
    printf("The Number of stars : ");
    scanf("%d",&m);
    nsp = n - 1 ;
    for(i = 1; i<= n; i++){
        for(k=1;k<=nsp;k++){
            printf(" ");
        } 
        for(j=1;j<=m;j++){
            printf("*");
        }   
        nsp -- ; 
        printf("\n");

    }
    return 0 ;
}