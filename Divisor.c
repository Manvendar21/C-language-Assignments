#include <stdio.h>

int main() {
    int i, a, b;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    for (i=2; i<=a; i++) {
        if (a % i==0) {
        printf("Smallest divisor of %d is: %d", a, i);
        break;
        }
    }

    for (i=2; i<=a && i<=b; i++) {
        if (a % i==0 && b % i==0) {
        printf("Smallest common divisor of %d and %d is: %d", a, b, i);
        break;
        }
    }

    return 0;
}