#include <stdio.h>
int main()
{
    int i,n,a=0;
    printf("Enter the number:");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            a++;
        }
    }
    if(a==2)
    {
        printf("Prime \n");
    }
    else
    {
        printf("Not Prime \n");
    }
    return 0;
}