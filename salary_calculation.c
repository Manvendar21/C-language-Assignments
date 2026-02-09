#include <stdio.h>

int main()
{
    float basic, hra , ta, gross, tax, net;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    hra = 0.10 * basic;
    ta = 0.05 * basic;

    gross = basic + hra + ta;

    tax = 0.02 * gross;

    net = gross - tax;

    printf("hra = %f\n", hra);
    printf("ta = %f\n", ta);
    printf("Gross Salary = %f\n", gross);
    printf("Net Salary = %f\n", net);

    return 0;
}