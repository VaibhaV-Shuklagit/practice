#include<stdio.h>
int main(){
    int a , b , c ;
    printf("Enter the Number A : ");
    scanf("%d",&a);
    printf("Enter the Number B : ");
    scanf("%d",&b);
    printf("Enter the Number C : ");
    scanf("%d",&c);
    b > c ?(b > a ? printf("B is greatest") : printf("A is greatest")) : (c > a ? printf("C is greatest") : printf("A is greatest")) ;
    return 0;

}