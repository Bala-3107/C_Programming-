#include <stdio.h>
int main()
{
    int i , a =0;
    printf("Enter a number:");
    scanf("%d", &i);
    if (i!=0)
    {
        for(; i!=0;i=i/10)
        {
             a++;
        }
    }
    else
    {
        a = 1;
    }
    printf("%d\n", a);
    return 0;
}