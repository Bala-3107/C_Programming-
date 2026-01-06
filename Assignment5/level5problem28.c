#include <stdio.h>
int main()
{
    int a, b, x;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    x = a;
    if (b > x)
        x = b;
loop:
    if (x % a == 0 && x % b == 0)
    {
        printf("LCM = %d", x);
        return 0;
    }
    x++;
    goto loop;
}
