#include <stdio.h>
int main()
{
    int i,a,count=0;
    printf("Enter an number : " );
    scanf("%d",&i);
    for(;i>0;i/=10)
    {
        a=i%10;
        if(a%2!=0)
        {
            count = count + 1 ;
        }
    }  
    printf("%d",count);
}