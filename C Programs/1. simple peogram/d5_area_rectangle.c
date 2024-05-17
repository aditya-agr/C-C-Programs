#include <stdio.h>
#include <conio.h>
int main()
{
    float l, b, a, p; 
    printf("\nEnter the Length of Rectangle :");
    scanf("%f", &l);
    printf("\nEnter the Breadth of Rectangle :");
    scanf("%f", &b);

    a = l*b;

    printf("\nThe Area of Rectangle is %f", a);

    getch();
    return 0;

}