#include <stdio.h>
#include <conio.h>
void main()
{
    int sum = 0, i = 0, num;

    printf("\nEnter the number : ");
    scanf("%d", &num);

    while(i <= num){
        if ( i % 2 == 0)
            sum = sum + i;
        i = i + 1;
    }
    printf("The sum of the even numbers is %d", sum);
    getch(); 
}