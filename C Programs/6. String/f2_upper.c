#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char string[50];
    int i;

    printf("Enter Your string :");
    scanf("%s", &string);

    printf("The edited string is %s.", strupr(string));

    getch(); 
    return 0;
}