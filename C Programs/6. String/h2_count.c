#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char string[50], f;
    int i, count;

    printf("Enter Your string :");
    gets(string);       //scanf("%s", &string);

    printf("Enter the letter :");
    scanf(" %c", &f);

    count = 0;
    for(i = 0; i< strlen(string); i++){
        if (f == string[i])
            count++;
    }
    printf("The number of the occurence of %c in given string is %d.", f, count);

    getch(); 
    return 0;
}