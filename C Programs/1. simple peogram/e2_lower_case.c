#include<stdio.h>
#include<conio.h>
void main()
{
    char l1, l2; 
    printf("\nEnter the letter in lower case :");
    scanf("%c", &l1);

    l2 = l1 - 32;

    printf("\nThe letter in upper case is %c", l2);

    getch();
}