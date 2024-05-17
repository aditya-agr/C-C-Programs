#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float x, y, z, w, n1, n2;
    printf("\nEnter the First Number (a) :");
    scanf("%f", &n1);
    printf("\nEnter the Second Number(b) :");
    scanf("%f", &n2);

    x = pow(n1+n2, 2);
    y = pow(n1+n2, 3);
    z = pow(n1-n2, 2);
    w = pow(n1-n2, 3);

    printf("\n(a+b)^2 = %f", x);
    printf("\n(a+b)^3 = %f", y);
    printf("\n(a-b)^2 = %f", z);
    printf("\n(a-b)^3 = %f", w);

    getch();
    return 0;
}