#include <stdio.h>
int main() {
    int i = 11; 
start:
    if (i < 20) {
        printf("%d\n", i);
        i += 2;    
        goto start;  
    }
    return 0;
}
