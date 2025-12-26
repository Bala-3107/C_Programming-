#include <stdio.h>
int main()
{
    int i , sum =0,a;
    printf("Enter the number: ");
    scanf("%d",&i);
start:
    if(i!=0)
    {
        a = i %10;
        sum = sum + a;
        i = i /10;
        goto start;
    }
    printf("Sum of digits: %d\n",sum);
    return 0;
}