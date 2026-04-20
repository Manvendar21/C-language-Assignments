#include <stdio.h>

int main() {
    int num, r, n;   
    int sum = 0;

    printf("Enter a 3 digit number: ");
    scanf("%d", &num);
    r = num;

    while (num > 0) {
        n = num % 10;             
        sum = sum + (n * n * n);   
        num = num / 10;        
    }
    if (sum == r)
        printf("It is an Armstrong number.\n");
    else
        printf("It is not an Armstrong number.\n");

    return 0; 
}
