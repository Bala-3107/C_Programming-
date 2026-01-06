#include <stdio.h>
int main()
{
    int i, a, count=0;
    printf("Enter a number: ");
    scanf("%d", &i);
    for(;i>0;i=i/10)
    {
        a= i%10;
        if((a==0)||(a==1)||(a==4)||(a==9))
        {
            count=count +1;
        }
    }
    printf("%d",count);
    return 0;
}
