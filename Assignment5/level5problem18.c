#include <stdio.h>
int main()
{
    int i , n , last , a=0;
    printf("Enter the number:");
    scanf("%d", &n);
    last = n % 100;
    for(i=1; i<=last; i++)
    {
        if(last%i==0)
        {
            a++;
        }
    }
    if(a==2)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not prime\n");
    }
    return 0;
}