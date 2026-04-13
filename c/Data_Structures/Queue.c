#include <stdio.h>
#include <stdlib.h>
#define Max 5
int Q[Max];
int front = -1, rear = -1;
void enqueue(int x)
{
    if (rear == Max - 1)
        printf("Overflow");
    else
    {
        if (front == -1 && rear == -1)
        {
            front++, rear++;
            Q[rear] = x;
        }
        else
        {
            rear++;
            Q[rear] = x;
        }
    }
}
void dequeue()
{
    if (front == -1)
        printf("Underflow");
    else
    {
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            printf("%d ", Q[front]);
            front++;
        }
    }
}
void display()
{
    if (front == -1 && rear == -1)
        printf("Queue is Empty");
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", Q[i]);
    }
}
int main()
{
    enqueue(5);
    enqueue(7);
    enqueue(6);
    enqueue(1);
    dequeue();
    printf("\n");
    display();
}