#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
    printf("Enter a character :");
    scanf(" %c", &a);
     
    printf("The ASCII value of the entered character is %d.", a);
    getch(); 
    return 0;
}