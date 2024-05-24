#include <stdio.h>
#include <conio.h>
int sum(int num);

int main()
{
    int n, sum1;
    printf("\nEnter the number : ");
    scanf("%d", &n);

    sum1 = sum(n);

    printf("\nThe sum of %d by recursion id %d.", n, sum1);

    getch();
    return 0;
}

int sum(int num1)
{
    if (num1 == 1)
        return 1;
    return (num1 + sum(num1 - 1));
}
