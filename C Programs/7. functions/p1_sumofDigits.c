#include <stdio.h>
#include <conio.h>
int recursive(int num);
int non_recursive(int num);

int main()
{
    int n, sum1, sum2;
    printf("\nEnter the number : ");
    scanf("%d", &n);

    sum1 = recursive(n);
    sum2 = non_recursive(n);

    printf("\nThe sum of the digits by recursion id %d.", sum1);
    printf("\nThe sum of the digits by non-recursion id %d.", sum2);

    getch();
    return 0;
}

int recursive(int num1)
{
    if (num1 == 0)
        return 0;
    return (num1 % 10 + recursive(num1 / 10));
}

int non_recursive(int num)
{
    int remainder, sum = 0;

    while (num != 0)
    {
        remainder = num % 10;
        sum = sum + remainder;
        num = num / 10;
    }
    return sum;
}