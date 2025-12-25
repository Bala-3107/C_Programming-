#include <stdio.h>
int main ()
{
    int a ;
    printf("Enter the number :");
    scanf("%d",&a);
    if (a%100==a/100)
       printf("1");
    else
        printf("0"); 
    return 0;

    
}