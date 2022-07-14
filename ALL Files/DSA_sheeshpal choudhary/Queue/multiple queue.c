#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define maxq 10
struct queue{
	int data[maxq];
	int rear1,front1,rear2,front2;
};
void Add_queue1(struct queue*,int);
int Delete_queue1(struct queue*);
void Add_queue2(struct queue*,int);
int Delete_queue2(struct queue*);
void Display_queue1(struct queue*);
void Display_queue2(struct queue*);
int main()
{
	struct queue q1;
	int n,item;
	q1.rear1=q1.front1=-1;
	q1.rear2=q1.front2=maxq;
	do{
		system("cls");
		printf("1. Add queue1:\n");
		printf("2. Delete queue1:\n");
		printf("3. Add queue2:\n");
		printf("4. Delete queue2:\n");
		printf("5. Display queue1:\n");
		printf("6. Display queue2:\n");
		printf("0. Exit:\n");
		printf("enter your choice:\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				printf("enter a item in queue 1:");
				scanf("%d",&item);
				Add_queue1(&q1,item);
				getch();
				break;
			case 2:
				item=Delete_queue1(&q1);
				if(item!=0)
					printf("%d deleted",item);
				getch();
				break;
			case 3:
				printf("enter a item in queue 2:");
				scanf("%d",&item);
				Add_queue2(&q1,item);
				getch();
				break;
			case 4:
				item=Delete_queue2(&q1);
				if(item!=0)
					printf("%d deleted",item);
				getch();
				break;
			case 5:
				Display_queue1(&q1);
				getch();
				break;
			case 6:
				Display_queue2(&q1);
				getch();
				break;
			case 0:
				break;
			default:
				printf("enter the valid choice:");
				getch();
				break;
		}
	}while(n!=0);
}
void Add_queue1(struct queue *q,int item)
{
	if(q->rear1==maxq-1|| q->rear1==q->rear2-1)
	{
		printf("overflow:");
		return;
	}
	if(q->rear1==-1)
		q->rear1=q->front1=0;
	else
		q->rear1++;
	q->data[q->rear1]=item;
	return;
}
int Delete_queue1(struct queue*q)
{
	int item;
	if(q->front1==-1)
	{
		printf("Underflow:");
		return 0;
	}
	item=q->data[q->front1];
	if(q->front1==q->rear1)
		q->front1=q->rear1=-1;
	else
		q->front1++;
	return item;
}
void Add_queue2(struct queue *q,int item)
{
	if(q->rear2==0|| q->rear1==q->rear2-1)
	{
		printf("overflow:");
		return;
	}
	if(q->rear2==maxq)
		q->rear2=q->front2=maxq-1;
	else
		q->rear2--;
	q->data[q->rear2]=item;
	return;
}
int Delete_queue2(struct queue*q)
{
	int item;
	if(q->front2==maxq)
	{
		printf("Underflow:");
		return 0;
	}
	item=q->data[q->front2];
	if(q->front2==q->rear2)
		q->front2=q->rear2=maxq;
	else
		q->front2--;
	return item;
}
void Display_queue1(struct  queue*q)
{
	int i;
	if(q->front1==-1)
	{
		printf("list is empty:");
		return;
	}
	for(i=q->front1;i<=q->rear1;i++)
	{
		printf("%d\t",q->data[i]);
	}
	return;
}


void Display_queue2(struct  queue*q)
{
	int i;
	if(q->front2==maxq)
	{
		printf("list is empty:");
		return;
	}
	for(i=q->front2;i>=q->rear2;i--)
	{
		printf("%d\t",q->data[i]);
	}
	return;
}
//no error
