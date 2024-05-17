#include <stdio.h>
#include <conio.h>
void main()
{
    int mul = 1, i = 1, num;

    printf("\nEnter the number : ");
    scanf("%d", &num);

    while(i <= num){
        if ( i % 2 == 0)
            mul = mul * i;
        i = i + 1;
    }
    printf("The multiplication of the even numbers is %d", mul);
    getch(); 
}