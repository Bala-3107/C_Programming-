#include <stdio.h>
int main()
{
    int a, result;
    printf("Enter the two digit number :");
    scanf("%d",&a);
    result = (a/10)*10;
    printf("Result =%d",result);
    return 0;
}