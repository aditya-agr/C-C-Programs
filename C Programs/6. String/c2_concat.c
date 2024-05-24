#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str1[50], str2[59];

    printf("Enter Your 1st string :");
    scanf("%s", &str1);
    printf("Enter Your 2nd string :");
    scanf("%s", &str2);

    strcat(str1, str2);
    printf("The concatation of the strings is %s.", str1);

    getch(); 
    return 0;
}