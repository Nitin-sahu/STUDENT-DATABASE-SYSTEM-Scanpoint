#include<stdio.h>
#include<conio.h>

usig namespace std;
int function(int a,int m,int rs)
{
        if(a>m)
            rs=rs-(a-m);
        else
            rs=rs+(m-a);

    return rs;
}
int main()
{
    int a,m,rs;
    scanf("%d%d%d",&a,&m,&rs);

    rs=function(&a,&m,&rs);

    printf("%d",rs);
    return 0;
}
