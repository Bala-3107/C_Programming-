#include <stdio.h>
int main()
{
    int i , a=0;
    for (i=10; i<=99; i++)
    {
        if(i%2!=0 && i/10 ==7)
        {
            a = a+i;
        }
    }
    printf("%d\n", a);
    return 0;
}
