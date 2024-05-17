#include<stdio.h>
#include<conio.h>
int main()
{
    char char1;
    printf("\nEnter the number for day: ");
    scanf(" %c", &char1);

    switch(char1){
    case '0' :
        printf("SUNDAY");
        break;
    case '1' :
        printf("MONDAY");
        break;
    case '2' :
        printf("TUESDAY");
        break;
    case '3' :
        printf("WEDNESDAY");
        break;
    case '4' :
        printf("THURSDAY");
        break;
    case '5' :
        printf("FRIDAY");
        break;
    case '6' :
        printf("SATURDAY");
        break;
    default :
        printf("You have entered a wrong number.");
        break;
    }

    getch(); 
    return 0;

}