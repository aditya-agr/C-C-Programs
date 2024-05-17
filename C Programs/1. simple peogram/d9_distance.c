#include <stdio.h>
#include <conio.h>
int main()
{
    float d, f, i, cm; 
    printf("\nEnter the distance b\\w the two cities (in m) :");
    scanf("%f", &d);
    
    f = 3.28084*d;
    i = 12 * f;
    cm = 100 * d;

    printf("\nThe distance in feet is %f", f);
    printf("\nThe distance in inches is %f", i);
    printf("\nThe distance in centimeter is %f", cm);

    getch();
    return 0;

}