#include <stdio.h>
#include <conio.h>
void main()
{
    int mul = 1, i, num;

    printf("\nEnter the number : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++){
        if (i % 2 == 0)
            mul = mul * i;
    }
    printf("The multiplication of the even numbers is %d", mul);
    getch();
}