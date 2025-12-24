#include <stdio.h>
int main()
{
    int a , one;
    printf("Enter the number :");
    scanf("%d",&a);
    one = a%10;
    printf("Result=%d",one);
    return 0;
}