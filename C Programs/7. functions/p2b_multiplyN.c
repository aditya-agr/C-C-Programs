#include <stdio.h>
#include <conio.h>
int multiply(int num);

int main()
{
    int n, mul;
    printf("\nEnter the number : ");
    scanf("%d", &n);

    mul = multiply(n);

    printf("\nThe multiply of first %d by recursion id %d.", n, mul);

    getch();
    return 0;
}

int multiply(int num1)
{
    if (num1 == 1)
        return 1;
    return (num1 * multiply(num1 - 1));
}
