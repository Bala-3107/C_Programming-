#include <stdio.h>

int main()
{
    int a, b, c, x;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    x = a;
    if (b > x) x = b;
    if (c > x) x = c;
loop:
    if (x % a == 0 && x % b == 0 && x % c == 0)
    {
        printf("LCM = %d", x);
        return 0;
    }
    x++;
    goto loop;
}
