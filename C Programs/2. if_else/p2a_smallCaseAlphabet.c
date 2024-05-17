#include<stdio.h>
#include<conio.h>
int main()
{
    char l;
    printf("\nEnter the letter : ");
    scanf(" %c", &l);

    if (l > 92 && l < 123){
        printf("You have entered a small case letter and the letter is %c", l);
    }
    else{
       printf("You have not entered a small case letter");
    }

    getch();
    return 0;

}