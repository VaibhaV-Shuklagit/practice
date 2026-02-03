#include<stdio.h>
int main(){
    int i,j,n,m,k,nst,nsp,l,v;
    printf("The Number of rows : ");
    scanf("%d",&n);
    nsp = 1 ;
    nst = n - 1;
    int x =  65 ;
    for(i=1;i<=2*n - 1 ;i++){ 
        char ch = (char)x;
        printf("%c",ch);
        x ++ ;
    } 
    printf("\n");
    for(j = 1;j <=n-1;j++){ 
         x  = 65 ;
        for(k=1;k<=nst;k++){
             char ch = (char)x;
            printf("%c",ch);
             x ++ ;
        }
        for(l=1;l<=nsp;l++){
            printf(" ");
        }
        for(v=1;v<=nst;v++){
               x -- ;
         char ch = (char)x;
            printf("%c",ch);
        }
        nst-- ;
        nsp+=2 ;
        printf("\n");
    }
    return 0 ;
}