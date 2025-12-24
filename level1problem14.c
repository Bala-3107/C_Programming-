#include <stdio.h>

int main() {
    int a, rev;
    printf("Enter a three digit number: ");
    scanf("%d", &a);
    rev = (a % 10) * 100 + ((a / 10) % 10) * 10 + (a / 100);
    printf("Reversed number: %d", rev);
    return 0;
}
