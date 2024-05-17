#include <stdio.h>
#include <conio.h>
void main()
{
    int sum = 0, i, num;

    printf("\nEnter the number : ");
    scanf("%d", &num);

    for (i = 0; i <= num; i++){
        sum = sum + i;
    }
    printf("The sum of the numbers is %d", sum);
    getch();
}