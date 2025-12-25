#include <stdio.h>
int main() {
    int i = 1;
start:
    if (i <= 9) {
        printf("%d\n", i);
        i += 2;     
        goto start;  
    }
    return 0;
}
