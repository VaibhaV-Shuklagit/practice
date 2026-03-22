#include<stdio.h>
#include<stdlib.h>
#define Max 5 
int top = -1;
void push(int arr[] ,int x)
{   
    if(top >= Max - 1)
    {
        printf("Stack Overflow !!");
        return;
    }
    else
    {
        arr[++top] = x ;
    }
}
void pop(int arr[]){
    if(top == -1)
    {
        printf("Stack Underflow !!");
        return ;
    }
    else
    {
        top -- ;
    }
}
int main()
{
    int arr[Max];
    for(int i = 0 ; i < Max ; i++)
    {
    push(arr,i+5);
    }
    pop(arr);
    printf("%d",arr[top]);
    return 0;
}