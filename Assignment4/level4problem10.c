#include <stdio.h>
int main()
{
    int i=71;
    int sum=0;
start:
    if(i<80)
    {
        sum = sum+i;
        i =i+2;
        goto start;
    }
    printf("%d\n",sum);
    return 0;
}