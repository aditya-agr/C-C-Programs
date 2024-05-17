#include <stdio.h>
#include <conio.h>
void main()
{
    int rev = 0, remainder, first, last, sum =0, sum2=0, num, num2;

    printf("\nEnter the 5 digit number : ");
    scanf("%d", &num);
    num2 = num;

    for (num ; num != 0; num = num / 10){
        remainder = num % 10;
        sum = sum + remainder;
        rev = rev * 10 + remainder;
    }

    last = num2 % 10;
    for(num2 ; num2 > 9; num2 /= 10){}
    first = num2;
    sum2 = first + last;


    printf("\nThe reverse of number is %d",  rev);
    printf("\nThe sum of digits of number is %d", sum);
    printf("\nThe sum of last and first digit of number is %d", sum2);

    getch();   
}