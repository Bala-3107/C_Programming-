#include <stdio.h>
int main()
{
    int i, a, count=0;
    printf("Enter a number: ");
    scanf("%d", &i);
    for(;i>0;i=i/10)
    {
        a= i%100;
        if((a==16)||(a==25)||(a==36)||(a==49)||(a==64)||(a==81))
        {
            count=count +1;
        }
    }
    printf("%d",count);
    return 0;
}
