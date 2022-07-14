#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAXSTK 10
struct stack
{
int space[MAXSTK];
int top;
};

int i=0;
void push(struct stack *,int);
int pop(struct stack *);
int peep(struct stack *);
int isoperator(char);
int solve(int,char,int);
int evalpost(char []);
void display(struct stack *);
int main()
{
    char post[20],pre[20];
    int ans;
    printf("enter postfix notation");
    gets(post);
    ans=evalpost(post);
    printf("%d",ans);
    return 0;
    }
int evalpost(char post[])
{
    int i=0;
    struct stack s1;
    int a,b,n;
    s1.top=-1;
    while(post[i]!='\0')
    {
    if(isoperator(post[i]))
    {
        a=pop(&s1);
        b=pop(&s1);
        n=solve(b,post[i],a);
        push(&s1,n);
    }
    else
    {
    push(&s1,post[i]-'0');
    }
    i++;
}
    n=pop(&s1);
    return n;
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

int pop(struct stack *s)
{
    int item;
    if(s->top==-1)
    {
        printf("underflow");
        return 0;
    }
    item=s->data[s->top];
    s->top--;
    return item;
}

int isoperator(char ch)
{
    if(ch=="+" || ch == "*" ||ch == "-" ||ch == "/" ||ch == "^"  )
        return 1;
    else
        return 0;

}

int solve(int a,char ch,int b)
{
    switch(ch)
    {

        case'+':
            return a+b;
        case'-':
            return a+b;
        case'*':
            return a+b;
        case'/':
            return a+b;
        case'^':
            return a+b;
        default:
            return 0;

    }

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



