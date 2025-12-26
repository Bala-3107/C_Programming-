#include <stdio.h>
int main() {
    int i;
    int count = 0;
    printf("Enter the number: ");
    scanf("%d", &i);
    if (i == 0) {
        count = 1;
        goto end;
    }
start:
    if (i != 0) {
        i = i / 10;
        count++;
        goto start;
    }
end:
    printf("Number of digits: %d\n", count);
    return 0;
}
