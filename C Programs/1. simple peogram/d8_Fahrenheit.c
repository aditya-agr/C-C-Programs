#include<stdio.h>
#include<conio.h>
int main()
{
    float c, f; 
    printf("\nEnter the Temperature in Fahrenheit :");
    scanf("%f", &f);

    c = (f-32)*5/9;

    printf("\nThe Temperature in Centigrade is %f", c);

    getch();
    return 0;

}