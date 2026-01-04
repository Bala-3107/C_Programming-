#include <stdio.h>
int main()
{
    int i , a=0;
    printf("Enter the number:");
    scanf("%d", &i);
    int b = i;
    if(b<0)
       b = -b;
    for(; b!=0; b=b/10)
    {
        a = a*10+(b%10);
    }
    if(i<0)
       a = -a;
    printf("%d\n", a);
    return 0;
}