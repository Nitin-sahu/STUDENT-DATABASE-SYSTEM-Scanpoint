//LINEAR QUEUE
#include<stdio.h>
#include<conio.h>
#define N 10
int queue[N];
int front=-1;
int rear= -1;

void enqueue(int);
void display();
void peek();
void dequeue();

int main()
{
    enqueue(2);
    enqueue(3);
    enqueue(5);
    enqueue(-1);
    printf("queue is =\n");
    display();
      printf("first elemnt  is =\n");
    peek();
    dequeue();

      printf("first elemnt  is =\n");
    peek();
      printf("queue is =\n");
    display();

}
void enqueue(int x)
{
if(rear==N-1)
printf("overflow");
else if(front==-1 && rear==-1)
{
    front=rear=0;
    queue[rear]=x;
}
else
{
    orear++;
    queue[rear]=x;
}

}
void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("underflow");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        printf("\n%d is deleted\n",queue[front]);
        front++;
    }
}
void display()
{   int i;
    if(front==-1 && rear==-1)
    {
        printf("underflow, queue is empty");
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("%d\n",queue[i]);
        }
    }
}
void peek()
{
    if(front==-1 && rear == -1)
        printf("queueu  is empty");
    else
    {
        printf("%d",queue[front]);
    }
}
