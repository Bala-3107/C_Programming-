#include <stdio.h>
int main ()
{
    int a ;
    printf("Enter the number :");
    scanf("%d",&a);
    if (a%10<a/10)
       printf("1");
    else
        printf("0"); 
    return 0;

    
}