#include <stdio.h>
#include <conio.h>
void main()
{
    int mul = 1, i = 1, num;

    printf("\nEnter the number : ");
    scanf("%d", &num);

    do{
        mul = mul * i;
        i = i + 1;
    }while(i <= num);
    printf("The multiplication of the numbers is %d", mul);
    getch(); 
}