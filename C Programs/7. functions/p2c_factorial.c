#include <stdio.h>
#include <conio.h>
int factorial(int num);

int main()
{
    int n, fact;
    printf("\nEnter the number : ");
    scanf("%d", &n);

    fact = factorial(n);

    printf("\nThe factorial of %d by recursion id %d.", n, fact);

    getch();
    return 0;
}

int factorial(int num1)
{
    if (num1 == 1 || num1 == 0)
        return 1;
    return (num1 * factorial(num1 - 1));
}
