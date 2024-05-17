#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float r, a, c, pi = 22/7; 
    printf("\nEnter the Radius od Circle :");
    scanf("%f", &r);

    c = 2*pi*r;
    a = pi*pow(r, 2);

    printf("\nThe Circumference of Circle is %f", c);
    printf("\nThe Area of Circle is %f", a);

    getch();
    return 0;
}