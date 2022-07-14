#include<stdio.h>
#include<conio.h>
#define MAXSTK 10
struct stack
{
int space[MAXSTK];
int top;
};

void push(struct stack *,int);
int pop(struct stack *);
int peek(struct stack *);
int disply(struct stack *);
int main()
{
    struct stack s1;
    s1.top=-1;
    int n,item;

    do{
    printf("for  push,press :1");
    //scanf("%d",n);
    printf("for  push,pop :2");
    //scanf("%d",n);
    printf("for  push,peek :3");
    //scanf("%d",n);
    printf("for  push,display :4");

    printf("to exit:press 5");
    scanf("%d",n);
switch(n)
{
case 1:
        printf("enter item:");
        scanf("%d",&item);
        push(&s1,item);
        break;


case 2:
        item=pop(&s1);
        printf("%d is pooped",item);
}
    }while(n!=0);
void push(struct stack *s,int item)
{

    if(s->top==MAXSTK-1)
    {

        printf("overflow");
        return;
    }
    s->top++;
    s->data[s-top]=item;
    return ;


    display(&s1);

}

void display(struct stack *)
{
    int i=0;
    for(i=s1->top;i>=0;i--)
    {

    printf("%d\n,s->space[i]);
    }

}
