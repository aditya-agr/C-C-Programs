#include <stdio.h>
#include <conio.h>
void main()
{
    int mul = 1, i = 1, num;

    printf("\nEnter the number : ");
    scanf("%d", &num);

    while(i <= num){
        mul = mul * i;
        i = i + 1;
    }
    printf("The multiplication of the numbers is %d", mul);
    getch(); 
}