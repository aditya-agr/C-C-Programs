#include <stdio.h>
#include <conio.h>
int main()
{
    float p, r, t, si;

    printf("\nEnter the Principal Amount (in Rs.) :");
    scanf("%f", &p);
    printf("\nEnter the Rate of Interest (in %%) :");
    scanf("%f", &r);
    printf("\nEnter the Time Period (in years) :");
    scanf("%f", &t);

    si = p * r * t / 100;

    printf("\nThe Simple Interest of %0.2f at the rate of %0.2f for %0.2f years is %0.2f", p, r, t, si);
    printf("\nThe total amount will be %0.2f ", p + si);

    getch();
    return 0;
}