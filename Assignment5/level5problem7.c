#include <stdio.h>

int main()
{
    for (int i = 10; i <= 99; i++)
    {
        int a = (i % 10) + (i / 10);

        if (i % 2 != 0 && a == 7)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
