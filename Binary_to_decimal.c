 #include <stdio.h>
 #include <math.h>

 void main() {
    int num, b= 0, i = 0, remainder;

    printf("Enter a binary number:");
    scanf("%d", &num);

    while(num>0)
    {
        remainder = num % 10;
        b= b + remainder*pow(2, i);
        num =num / 10;
        i++;
    }
    printf("Decimal value is: %d", b);
    
}
