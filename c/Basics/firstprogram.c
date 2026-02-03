#include<stdio.h>
int main(){
   int x;
   printf("Enter the program : ");
   scanf("%d",&x);
   if(x%5 == 0){
    if(x %15 == 0){
        printf("Yes");
    }
   }
   return 0;
}
    