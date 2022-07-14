#include<stdio.h>
#include<conio.h>
#define MAXQ 10
struct queue{
int data[MAXQ];
int front,rear ;
};
void add_queue(struct queue *,int);
int del_queue(struct queue *);
void display(struct*);
int main()
{
    struct queue q1;
    int n,item;
    q1.front=q1.rear=-1;
    do{
    system("cls");
    printf("1.Add queure");
    printf("2.del queue");
    printf("Display queue");
    printf("0. exit");
    printf("enter your choice");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
                printf("Enter item:");
                scanf("%d",&item);
                add_queue(&q1,item);
                getch();
                break;
        case 2:
            item=del_queue(&q1);
            if(item !=0)
                printf("%d deleted",item);
            getch();
            break;
        case 3:
            display(&q1);
            getch();
            break;
        case 0:
            break;
        default:
            printf("invalid input");
            getch();
    }
    }while(n!=0);
}

void add_queue(struct queue *q,int item)
{
    if(q->rear==-1)
    {

        printf("Overflow");
        return;
    }
    if(q->rear==-1)
        q->front=q->rear=0;
    else
        q->rear++;
    q->data[q->rear]=item;
    return;

}

int del_queue(struct queue *q)
{   int item;
    if(q->front==-1)
    {
        printf("underflow");
        return 0;
    }
    item=q->data[q->front];
    if(q->front==q->rear)
        q->front=q->rear=-1;
    else
        q->front++;
    return item;
}

void display(struct *q)
{
    int i;
    if(q->front==-1)
    {
        printf("queue is empty");
        return;
    }
    for(i=q->front;i<=q->rear;i++)
       {
         printf("%d\t",q->data[i]);
        if(i==MAXQ-1)
            i=-1;
       }
       printf("%d\t",q->data[i]);
}
