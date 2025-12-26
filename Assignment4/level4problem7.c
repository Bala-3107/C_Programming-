#include <stdio.h>
int main() 
{
    int i =11;
    int sum;
start:
    if (i<=99)
    {
        sum = (i /10) + (i % 10);
        if (i %2!=0 && sum==7)
        {
            printf("%d\n",i);
        }
        i++;
        goto start;
    }
    return 0;
}