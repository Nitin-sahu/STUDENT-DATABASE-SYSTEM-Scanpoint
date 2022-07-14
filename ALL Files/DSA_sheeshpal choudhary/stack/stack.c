#include<stdio.h>
#include<conio.h>
#define MAXSTK 10
struct stack
{
int space[MAXSTK];
int top;
};

int i=0;
void push(struct stack *,int);
int pop(struct stack *);
int peek(struct stack *);
void display(struct stack *);
int main()
{
    struct stack s1;
    s1.top=-1;
    int n,item;

    do{
    printf("for  push,press :1\n");
    //scanf("%d",n);
    printf("for  ,pop :4\n");
    //scanf("%d",n);
    printf("for peek :3\n");
    //scanf("%d",n);
    printf("for  display :2\n");

    printf("to exit:press 5\n");
    scanf("%d",&n);

        switch(n)
        {
            printf("welcome to switch");
            case 1:
                printf("enter item:");
                scanf("%d",&item);
                push(&s1,item);
                printf("%d is inserted1\n");
                break;
            case 2:
                display(&s1);
                getch();
                break;
            case 5:
                exit(0);
        }

        }while(n!=0);

}
void push(struct stack *s,int item)
{

            if(s->top==MAXSTK-1)
            {

                printf("overflow");
                return;
            }
            s->top++;
            s->space[s->top]=item;
            return ;


}

void display(struct stack *s)
{
    int i;

    if(s->top ==-1)
    {

        printf("stack is empty");
        return;
    }
    for(i=s->top;i>=0;i--)

    {

        printf("%d\n",s->space[i]);
    }


}


