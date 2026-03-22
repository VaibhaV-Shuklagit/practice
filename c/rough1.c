#include <stdio.h>
#include <stdlib.h>

#define Max 7

int top1 = -1;           
int top2 = Max;         

void push1(int arr[], int x){
    if (top1 < top2 - 1) 
    { 
        arr[++top1] = x;
    } 
    else 
    {
        printf("Stack 1 Overflow\n");
    }
}
void push2(int arr[], int x) 
{
    if (top1 < top2 - 1) 
    {
        arr[--top2] = x;
    } 
    else 
    {
        printf("Stack 2 Overflow\n");
    }
}
void pop1(int arr[]) 
{
    if (top1 >= 0) 
    {
        printf("Popped from Stack 1: %d\n", arr[top1--]);
    } 
    else 
    {
        printf("Stack 1 Underflow\n");
    }
}
void pop2(int arr[]) 
{
    if (top2 < Max) 
    {
        printf("Popped from Stack 2: %d\n", arr[top2++]);
    } 
    else
    {
        printf("Stack 2 Underflow\n");
    }
}

int main() {
    int arr[Max];
    
    push1(arr, 5);
    push1(arr, 4);
    push1(arr, 6);
    
    pop1(arr); 
    
    return 0;
}
