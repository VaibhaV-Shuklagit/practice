#include<stdio.h>
int main(){ int i,k,m,n,d;
    printf("Enter the Number  : ");
     scanf("%d",&n); 
     d = 1;
    for(k = 2; k < n; k++){
        if(n%k == 0){
            d = 0;
        break; 
    }
    }
    if(d==0)printf("The Number is Composite");
    if(d==1)printf("The Number is Prime");
    
    return 0;
    }
