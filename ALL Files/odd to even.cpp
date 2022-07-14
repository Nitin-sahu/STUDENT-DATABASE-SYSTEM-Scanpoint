#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

   
    if(num % 2 == 0)
        num+=1;
    else
        num-=1;
    
    
    printf("converted number:%d",num);
    return 0;
}
