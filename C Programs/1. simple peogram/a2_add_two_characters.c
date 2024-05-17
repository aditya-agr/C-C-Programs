#include <stdio.h>
#include <conio.h>
int main()
{
    char char1, char2;
    int sum, sub, mul, div, mod;

    printf("\nEnter the first number :");
    scanf(" %c", &char1);
    printf("\nEnter the second number :");
    scanf(" %c", &char2);

    sum = char1 + char2;
    sub = char1 - char2;
    mul = char1 * char2;
    div = char1 / char2;
    mod = char1 % char2;

    printf("\nThe addition of two numbers is : %d", sum);
    printf("\nThe subtraction of two numbers is : %d", sub);
    printf("\nThe multiplication of two numbers is : %d", mul);
    printf("\nThe division of two numbers is : %d", div);
    printf("\nThe modulo of two numbers is : %d", mod);

    getch();
    return 0;
}
