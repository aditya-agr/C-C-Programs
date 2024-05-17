#include <stdio.h>
#include <conio.h>
void main()
{
    int sum = 0, i = 0, num;

    printf("\nEnter the number : ");
    scanf("%d", &num);

    do{
        if ( i % 2 == 0)
            sum = sum + i;
        i = i + 1;
    }while(i <= num);
    printf("The sum of the even numbers is %d", sum);
    getch(); 
}