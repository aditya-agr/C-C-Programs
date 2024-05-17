#include<stdio.h>
#include<conio.h>
int main()
{
    float c, f; 
    printf("\nEnter the Temperature in Centigrade :");
    scanf("%f", &c);

    f = c*9/5 + 32;

    printf("\nThe Temperature in Fahrenheit is %f", f);

    getch();
    return 0;

}