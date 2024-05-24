#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str1[50], str2[59];

    printf("Enter Your 1st string :");
    scanf("%s", &str1);

    strcpy(str2, str1);
    printf("The entered string is copied to str2 i.e. %s.", str2);

    getch(); 
    return 0;
}