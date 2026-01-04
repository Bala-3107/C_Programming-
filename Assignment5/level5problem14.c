#include <stdio.h>
int main()
{
    int i, first , last , a=0, b ;
    printf("Enter the number:");
    scanf("%d", &i);
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
    int newnumber = last*place + middle*10 + first;
    printf("%d\n", newnumber);
    return 0;

}