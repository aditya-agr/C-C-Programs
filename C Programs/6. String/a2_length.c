#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char string[50];
    int str_length;

    printf("Enter Your string :");
    scanf("%s", &string);

    str_length = strlen(string);
    printf("The length of the string is %d.", str_length);

    getch(); 
    return 0;
}