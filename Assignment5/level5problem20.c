#include<stdio.h>
int main()
{
    int count,a=0;
    for (int i=2;i<=9;i++)
    {
        count = 0;
        for (int j=1;j<=i;j++)
        {
            if (i%j==0)
                count++;
        }
        if (count==2)
            a++;
    }
    printf("%d",a);
    return 0;
}
