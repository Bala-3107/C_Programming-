#include <stdio.h>
int main()
{
    int i,first,last,a=0,b ;
    printf("Enter the number:");
    scanf("%d", &i);
    if(i%2==0)
    {
        printf("%d\n",i);
    }
    else
    {
        b = i;
        last = i%10;
        for(first=b; first>=10; first=first/10)
        a++;
        int place=1;
        for(int j=1; j<=a; j++)
        {
            place = place*10;
        }
        int middle = (i%place)/10;
        int newnumber = (first-1)*place + middle*10 + last;
        printf("%d\n", newnumber);
    }
    return 0;
}