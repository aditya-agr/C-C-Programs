#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b;
    printf("\nEnter the first number : ");
    scanf("%d", &a);
    printf("\nEnter the second number : ");
    scanf("%d", &b);

    if (a < b){
        printf("The first number is less than the second number.");
    }
    else if (a > b){
        printf("The first number is greater than the second number.");
    }
    else {
        printf("The first number is equal to the second number.");
    }

    getch();
}
