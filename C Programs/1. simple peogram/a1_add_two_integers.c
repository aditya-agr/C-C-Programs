#include <stdio.h>
#include <conio.h>
int main()
{
    int sum, sub, mul, div, mod, n1, n2;

    
    printf("\nEnter the first number:");
    scanf("%d", &n1);
    printf("\nEnter the second number:");
    scanf("%d", &n2);

    sum = n1 + n2;
    sub = n1 - n2;
    mul = n1 * n2;
    div = n1 / n2;
    mod = n1 % n2;

    printf("\nThe addition of two numbers is : %d", sum);
    printf("\nThe subtraction of two numbers is : %d", sub);
    printf("\nThe multiplication of two numbers is : %d", mul);
    printf("\nThe division of two numbers is : %d", div);
    printf("\nThe modulo of two numbers is : %d", mod);

    getch();

    return 0;
}
