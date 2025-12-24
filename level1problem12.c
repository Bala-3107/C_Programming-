#include <stdio.h>
int main()
{
    int a , sum;
    printf("Enter the number :");
    scanf("%d",&a);
    sum = (a/100)+(a /10 %10)+(a %10);
    printf("Result = %d",sum);
    return 0;
}