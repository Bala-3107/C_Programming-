#include <stdio.h>
int main()
{
    int i , a=0;
    for (i=15; i<=95; i++)
    {
        if(i%10 ==5)
        {
            a = a+i;
        }
    }
    printf("%d\n", a);
    return 0;
}
