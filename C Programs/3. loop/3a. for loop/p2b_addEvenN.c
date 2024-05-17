#include <stdio.h>
#include <conio.h>
void main()
{
    int sum = 0, i, num;

    printf("\nEnter the number : ");
    scanf("%d", &num);

    for (i = 0; i <= num; i++){
        if (i % 2 == 0)
            sum = sum + i;
    }
    printf("The sum of the even numbers is %d", sum);
    getch();
}