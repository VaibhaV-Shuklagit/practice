#include<stdio.h>
int main(){
    int i,j,n,m,k,nst,nsp,l,v,x,a;
    printf("The Number of rows : ");
    scanf("%d",&n);
    nsp = 1 ;
    nst = n - 1;
    x = 2*n - 1 ;
    a = 1 ;
    for(i=1;i<=x;i++){
        if(i>=(x/2 + 1)){
            printf("%d",a);
            a--;
        } 
        else{
            printf("%d",a);
            a ++ ;
        }
    } 
    printf("\n");
    for(j = 1;j <=n-1;j++){
        for(k=1;k<=nst;k++){
            printf("%d",k);
        }
        for(l=1;l<=nsp;l++){
            printf(" ");
        }
        for(v=1;v<=nst;v++){
            k -- ;
            printf("%d",k);
        }
        nst-- ;
        nsp+=2 ;
        printf("\n");
    }
    return 0 ;
}