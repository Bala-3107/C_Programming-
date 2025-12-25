#include <stdio.h>
int main()
{
    int a , rem;
    printf("Enter the number :");
    scanf("%d",&a);
    rem = a % 8;
    printf("Result=%d",rem);
    return 0;
}