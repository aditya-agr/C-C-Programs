#include<stdio.h>
#include<conio.h>
int main()
{
    char l;
    printf("\nEnter the symbol or character : ");
    scanf(" %c", &l);

    if (l >= 'a' && l <= 'z' || l >= 'A' && l <= 'Z' ){
        printf("You have not entered a special symbol");
    }
    else{
        printf("You have entered a special symbol and the symbol is %c", l);
    }
    getch();
    return 0;

}

