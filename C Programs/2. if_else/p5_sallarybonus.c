#include <stdio.h>
#include <conio.h>
void main()
{
    float y1, y2, y;

    printf("\nEnter the current year : ");
    scanf("%f", &y1);
    printf("\nEnter the year in which you have joined : ");
    scanf("%f", &y2);

    y = y2 - y1;

    if (y > 3){
       printf("****CONGRATULATIONS**** \n You have got a bonus of Rs. 2500.");
    }
    getch();

}
