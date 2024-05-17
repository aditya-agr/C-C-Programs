#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float p, r, t, n, x, y, ci;

    printf("\nEnter the Principal Amount (in Rs.) :");
    scanf("%f", &p);
    printf("\nEnter the Rate of Interest (in %%) :");
    scanf("%f", &r);
    printf("\nEnter the Time Period (in years) :");
    scanf("%f", &t);
    printf("\nEnter the No. of times interest applied in the given Time Period (in years) :");
    scanf("%f", &n);

    x = 1 + r/n/100;
    y = t/n;
    ci = p * pow(x, y);
    
    printf("\nThe compound Interest of %0.2f at the rate of %0.2f for %0.2f years is %0.2f", p, r, t, ci - p);
    printf("\nThe total amount will be %0.2f ", ci);

    getch();
    return 0;
}