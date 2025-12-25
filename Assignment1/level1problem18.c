#include <stdio.h>
int main ()
{
    int a , result ;
    printf("Enter a two digit number:");
    scanf("%d",&a);
    result =10 + ( a%10);
    printf("Result =%d",result);
    return 0;
    
}