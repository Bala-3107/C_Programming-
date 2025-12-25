#include <stdio.h>
int main() 
{
 int i = 1, sum = 0;
start:
    if (i <= 5) {
        sum += i;
        i++;
        goto start;
    }
    printf("Sum = %d", sum);
    return 0;
}
