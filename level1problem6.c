#include <stdio.h>
int main()
{
    int a, ones;
    printf("Enter the number :");
    scanf("%d",&a);
    ones = a % 10;
    printf("Result=%d",ones);
    return 0;
}