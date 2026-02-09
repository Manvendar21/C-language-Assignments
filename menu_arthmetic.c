#include <stdio.h>

int main()
{
    int choice;
    int a, b;
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch (choice){
    case 1:
        printf("Addition = %d", a + b);
        break;

    case 2:
        printf("Subtraction = %d", a - b);
        break;

    case 3:
        printf("Multiplication = %d", a * b);
        break;

    case 4:
        if (b != 0)
        {
            printf("Division = %d", a / b);
        }
        else
        {
            printf("Cannot divide by zero");
        }
        break;
        
    default:
        printf("Invalid choice");
    }

    return 0;
}


