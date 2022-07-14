//Circular queue
#include<stdio.h>
#include<conio.h>
#define N 5
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
if( (rear+1)%N==front)
printf("overflow,queueu is full");
else if(front==-1 && rear==-1)
{
    front=rear=0;
    queue[rear]=x;
}
else
{
    rear=(rear+1)%N;
    queue[rear]=x;
}

}
void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("underflow,queue is empty");
    }
    else if(front==rear)
    {
        printf("\n%d is deleted\n",queue[front]);
        front=rear=-1;
    }
    else
    {
        printf("\n%d is deleted\n",queue[front]);
        front=(front+1)%N;          // circular queue conditioo
    }
}
void display()
{   int i=front;
    if(front==-1 && rear==-1)
    {
        printf("underflow, queue is empty");
    }
    else
    {
        while(i!=rear)
        {

            printf("%d\n",queue[i]);
            i=(i+1)%N;
        }
         printf("%d\n",queue[i]);
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
