#include<stdio.h>
#include<conio.h>
#include <math.h>
int main()
{
    float c, s, n; 
    printf("\nEnter the Number :");
    scanf("%f", &n);

    s = pow(n, 2);
    c = pow(n, 3);

    printf("\nThe square of the number is %f", s);
    printf("\nThe cube of the number is %f", c);

    getch();  
    return 0;

}