#include <stdio.h>
int main()
{
    int i, a , count=0;
    printf("Enter a number: ");
    scanf("%d", &i);
    for(;i>10;i= i/10)
    {
        a = i%100;
        if(a%2!=0)
        {
            count=count +1;
        }
    }
    printf("%d",count);
    return 0;
}