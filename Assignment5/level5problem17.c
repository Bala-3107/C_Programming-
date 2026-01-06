#include <stdio.h>
int main()
{
    int i,n,a=0;
    int temp , sum=0;
    printf("Enter the number:");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            a++;
        }
    }
    for (temp = n; temp>0;temp=temp/10)
    {
        sum = sum + (temp%10);
    }
    if(a==2 && sum==14)
    {
        printf("The number is a prime number and the sum of its digits is 14\n");
    }
    else if (a==2)
    {
        printf("The number is a prime number but the sum of its digits is not 14\n");
    }
    else if(sum==14)
    {
        printf("The number is not a prime number but the sum of its digits is 14\n");
    }
    else
    {
        printf("The number is not a prime number and the sum of its digits is not 14\n");
    }
    return 0;
}