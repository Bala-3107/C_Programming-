#include <stdio.h>
int main()
{
    int i, a, count=0;
    printf("Enter a number: ");
    scanf("%d", &i);
    for(;i>0;i=i/10)
    {
        a= i%10;
        if((a==2)||(a==3)||(a==5)||(a==7))
        {
            count=count +1;
        }
    }
    printf("%d",count);
    return 0;
}
