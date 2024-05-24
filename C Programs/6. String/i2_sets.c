#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char string[50], str1[50], char1;
    int str_length;

    printf("Enter Your string :");
    scanf("%s", &string);
    printf("Enter the character :");
    scanf(" %c", &char1);

    str_length = strlen(string);
    strnset(string, char1 , str_length);

    printf("The edited string is %s.", string);

    getch(); 
    return 0;
}