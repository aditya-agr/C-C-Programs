#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char string[50];

    printf("Enter Your string :");
    scanf("%s", &string);

    printf("The reverse of the string is %s.", strrev(string));

    getch(); 
    return 0;
}