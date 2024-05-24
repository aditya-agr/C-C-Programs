#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{

    char string[50], f;
    int i, count;

    printf("Enter Your string :");
    gets(string);       //scanf("%s", &string);

    count = 0;
    for(i = 0; i< strlen(string); i++){
        if (' ' == string[i])
            count++;
    }
    printf("The number of spaces in given string is %d.", count);

    getch(); 
    return 0;
}