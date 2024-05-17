#include <stdio.h>
#include <conio.h>
void main()
{
    float a;
    printf("\nEnter the number : ");
    scanf("%f", &a);

    if (a < 0){
        printf("The entered number %f is a negative intger.", a);
    }
    else if (a > 0){
       printf("The entered number %f is a positive intger.", a);
    }
    else {
        printf("The entered number is zero.", a);
    }
    getch();

}
