#include <stdio.h>
#include <conio.h>
int main()
{
    float sum, sub, mul, div, mod, f1, f2;

    printf("\nEnter the first number :");
    scanf("%f", &f1);
    printf("\nEnter the second number :");
    scanf("%f", &f2);

    sum = f1 + f2;
    sub = f1 - f2;
    mul = f1 * f2;
    div = f1 / f2;

    printf("\nThe addition of two numbers is : %0.4f", sum);
    printf("\nThe subtraction of two numbers is : %f", sub);
    printf("\nThe multiplication of two numbers is : %f", mul);
    printf("\nThe division of two numbers is : %f", div);

    getch();
    return 0;
}
