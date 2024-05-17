#include<stdio.h>
#include<conio.h>
void main()
{
    char l1, l2; 
    printf("\nEnter the letter in upper case :");
    scanf("%c", &l1);

    l2 = l1 + 32;

    printf("\nThe letter in ulower case is %c", l2);

    getch();
}