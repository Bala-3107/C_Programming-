#include<stdio.h>
int main()
{
    int n,count,a=0;
    count = 0;
    for(int i=0;i<100000;i++)
    {
        n = i;
        for(;n>0;n/=10)
        {
            a=a+(n % 10);
        }
        if(a==14)
        {
            count = count + 1;
        }
    }
    printf("%d",count);
}