#include <stdio.h>
#include <conio.h>
void main()
{
    int sum = 0, i = 0, num;

    printf("\nEnter the number : ");
    scanf("%d", &num);

    while(i <= num){
        sum = sum + i;
        i = i + 1;
    }
    printf("The sum of the numbers is %d", sum);
    getch(); 
}