#include <stdio.h>
int main()
{
    int i,temp,first,last,a,pow=1;
    printf("Enter the number: ");
    scanf("%d",&i);
    temp = i;
    last = i %10;
    first = i;
start:
    if(temp!=0)
    {
        a++;
        temp = temp /10;
        goto start;
    }
end:
    if(a>1)
    {
        pow =pow*10;
        a--;
        goto end;
    }
    first = first /pow;
    i = (last *pow) + (i /10 *10) + first;
    printf("Number after swapping first and last digit: %d\n",i);
    return 0;
}