#include<stdio.h>
int main(){
    int i,j,k,n,nsp,nst,a;
    printf("Enter the Numbers of Lines : ");
    scanf("%d",&n);
    nst = 1;
    nsp = n - 1 ;
    for(i = 1;i<=n;i++){
        a = 65;
        for(k = 1;k <= nsp ; k++){
            printf(" ");
        }
        for(j=1;j<=nst;j++){
            char ch = (char)a;
            printf("%c",ch);
            a ++ ;
        }
        nst = nst + 2 ;
        nsp -- ;
        printf("\n");
    }
} // nsp -> no. of spaces ;
// nst -> no. of stars ;