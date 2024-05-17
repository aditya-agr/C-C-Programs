#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float l, b, a, p; 
    printf("\nEnter the Height of Triangle :");
    scanf("%f", &l);
    printf("\nEnter the Length of base of Triangle :");
    scanf("%f", &b);


    a = 0.5*l*b;

    printf("\nThe Area of Triangle is %f", a);

    getch();
    return 0;
}