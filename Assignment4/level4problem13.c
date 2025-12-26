#include <stdio.h>
int main()
{
    int i,rev=0,a;
    printf("Enter the number: ");
    scanf("%d",&i);
start:
    if(i!=0)
    {
        a = i %10;
        rev = rev *10 + a;
        i = i /10;
        goto start;
    }
    printf("Reversed number: %d\n",rev);
    return 0;
}