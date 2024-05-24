#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{

    char string[50], f;
    int i, countUpper=0, countLower=0;

    printf("Enter Your string :");
    gets(string);       //scanf("%s", &string);

    for(i = 0; i< strlen(string); i++){
        if (string[i] >= 'A' && string[i] <= 'Z')
            countUpper++;
        if (string[i] >= 'a' && string[i] <= 'z')
            countLower++;
    }
    printf("The number of Uppercase letter in given string is %d.\n", countUpper);
    printf("The number of Lowercase letter in given string is %d.\n", countLower);

    getch(); 
    return 0;
}