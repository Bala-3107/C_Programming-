#include <stdio.h>
int main()
{
    int i, last , a , b=1;
    printf("Enter the number:");
    scanf("%d", &i);
    last = i%10;
    b=b*10;
    if(last%2 ==0)
    {
        a=i;
    }
    else
    {
        a=(i/10)*(b-1)+((last-1)); 
    }
    printf("%d\n", a);
    return 0;
}