#include<stdio.h>
int main()
{
    int i, n, middle ,a=0;
    printf("Enter a 4-digit number:");
    scanf("%d", &n);
    middle = (n / 10) % 100;
    for(i=1; i<=middle; i++)
    {
        if(middle%i==0)
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