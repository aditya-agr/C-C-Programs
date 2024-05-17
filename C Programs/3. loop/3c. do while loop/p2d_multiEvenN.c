#include <stdio.h>
#include <conio.h>
void main()
{
    int mul = 1, i = 1, num;

    printf("\nEnter the number : ");
    scanf("%d", &num);

    do{
        if ( i % 2 == 0)
            mul = mul * i;
        i = i + 1;
    }while(i <= num);
    printf("The multiplication of the even numbers is %d", mul);
    getch(); 
}