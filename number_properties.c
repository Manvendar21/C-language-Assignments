#include <stdio.h>
#include <math.h>

int main() {
    int n, i, isPrime = 1;
    long long fact = 1;

    scanf("%d", &n);

    printf("Square root: %.2f\n", sqrt(n));
    printf("Square: %d\n", n * n);
    printf("Cube: %d\n", n * n * n);

    if(n <= 1) isPrime = 0;
    for(i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if(isPrime)
        printf("Prime number\n");
    else
        printf("Not a prime number\n");

    for(i = 1; i <= n; i++)
        fact *= i;

    printf("Factorial: %lld\n", fact);

    printf("Prime factors: ");
    int temp = n;
    for(i = 2; i <= temp; i++) {
        while(temp % i == 0) {
            printf("%d ", i);
            temp /= i;
        }
    }

    return 0;
}
