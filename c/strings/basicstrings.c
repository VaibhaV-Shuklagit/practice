// we can initialize a string into many ways : 
#include<stdio.h>
int main(){
    char str[] = {'H','e','l','l','o',' ','W','o','r','l','d'}; // size = 11
    int i = 0 ;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i ++ ;
    }
    printf("\n");
    char str1[] = "Hello World"; // size = 12 
    i = 0 ;
    while(str1[i]!='\0'){
        printf("%c",str1[i]);
        i ++ ;
    }
    return 0 ;
}