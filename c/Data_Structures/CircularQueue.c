#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int CQ[MAX];
int front = -1;
int rear = -1;
void enQueue(int x)
{
    if ((rear + 1) % MAX == front)
        printf("Overflow");
    else
    {
        if (front == -1 && rear == -1)
        {
            front = (front + 1) % MAX;
            rear = (rear + 1) % MAX;
            CQ[rear] = x;
        }
        else
        {
            rear = (rear + 1) % MAX;
            CQ[rear] = x;
        }
    }
}
void deQueue()
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
            printf("%d ", CQ[front]);
            front = (front + 1) % MAX;
        }
    }
}
void display()
{   
    if(front == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
    for (int i = front; i <= rear; i = (i + 1) % MAX)
    {
        printf("%d ",CQ[i]);
        if(i == rear) break;
    }
}
}
int main()
{
    enQueue(5);
    enQueue(7);
    enQueue(6);
    enQueue(1);
    enQueue(8);
    deQueue();
    printf("\n");
    display();
}