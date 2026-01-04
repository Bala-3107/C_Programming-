#include <stdio.h>
int main()
{
    int i, a=0;
    printf("Enter the number:");
    scanf("%d", &i);
    if (i!=0)
    {
        for(; i!=0; i=i/10)
        {
            a = a+(i%10);
        }
    }
    printf("%d\n", a);
    return 0;
}