#include <stdio.h>

int main() {
    int num, r, n;   // r= temporary variable , n= lastdigit of number
    int sum = 0;

    printf("Enter a 3 digit number: ");
    scanf("%d", &num);

    // Store original number for comparison
    r = num;

    while (num > 0) {
        n = num % 10;              // Get last digit
        sum = sum + (n * n * n);   // Add cube of digit to sum
        num = num / 10;           // Remove last digit
    }
    if (sum == r)
        printf("It is an Armstrong number.\n");
    else
        printf("It is not an Armstrong number.\n");

    return 0; 
}
