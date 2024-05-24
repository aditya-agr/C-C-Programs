#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str1[50], str2[59];
    int cmp;

    printf("Enter Your 1st string :");
    scanf("%s", &str1);
    printf("Enter Your 2nd string :");
    scanf("%s", &str2);

    cmp = strcmp(str1, str2);
    printf("The comparion of the strings is %d.", cmp);

    getch(); 
    return 0;
}