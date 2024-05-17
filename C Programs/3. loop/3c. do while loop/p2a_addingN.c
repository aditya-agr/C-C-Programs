#include <stdio.h>
#include <conio.h>
void main()
{
    int sum = 0, i = 0, num;

    printf("\nEnter the number : ");
    scanf("%d", &num);

    do{
        sum = sum + i;
        i = i + 1;
    }while(i <= num);
    printf("The sum of the numbers is %d", sum);
    getch(); 
}