#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float l, b, a, p; 
    printf("\nEnter the Length of Rectangle :");
    scanf("%f", &l);
    printf("\nEnter the Breadth of Rectangle :");
    scanf("%f", &b);


    p = 2*(l +b);
    a = l*b;

    printf("\nThe Perimeter of Rectangle is %f", p);
    printf("\nThe Area of Rectangle is %f", a);

    getch();
    return 0;

}