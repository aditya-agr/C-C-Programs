#include <stdio.h>
#include <conio.h>
void main()
{
    float q, p, t, to;

    printf("\nEnter the price per item(in Rs.) : ");
    scanf("%f", &p);
    printf("\nEnter the quantity : ");
    scanf("%f", &q);

    t = p * q;
    to = 0.9 * t;

    if (t < 1000){
        printf("The total amount to be paid is %f", t);
    }
    else {
       printf("****CONGRATULATIONS**** \n You have availed a 10%% off offer. \n Now the now amount to be paid is %f", to);
    }
    getch();

}
