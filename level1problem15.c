#include <stdio.h>
int main()
{
    int a, res ,first , last;
    printf("Enter a four digit number:");
    scanf("%d",&a);
    first = a/100;
    last = a%100;
    res = (first*100) + (last %10)*10 +(last /10);
    printf("Result =%d",res);
    return 0;

}