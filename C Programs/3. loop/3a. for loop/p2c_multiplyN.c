#include <stdio.h>
#include <conio.h>
void main()
{
    int mul = 1, i, num;

    printf("\nEnter the number : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++){
        mul = mul * i;
    }
    printf("The multiplication of the numbers is %d", mul);
    getch();
}