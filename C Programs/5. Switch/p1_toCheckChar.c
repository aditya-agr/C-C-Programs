#include<stdio.h>
#include<conio.h>
int main()
{
    char char1;
    printf("\nEnter the character : ");
    scanf(" %c", &char1);

    switch(char1){
    case 'a' :
        printf("You have entered a Vowel.");
        break;
    case 'e' :
        printf("You have entered a Vowel.");
        break;
    case 'i' :
        printf("You have entered a Vowel.");
        break;
    case 'o' :
        printf("You have entered a Vowel.");
        break;
    case 'u' :
        printf("You have entered a Vowel.");
        break;
    case 'A' :
        printf("You have entered a Vowel.");
        break;
    case 'E' :
        printf("You have entered a Vowel.");
        break;
    case 'I' :
        printf("You have entered a Vowel.");
        break;
    case 'O' :
        printf("You have entered a Vowel.");
        break;
    case 'U' :
        printf("You have entered a Vowel.");
        break;
    default :
        printf("You have entered a Consonant.");
        break;
    }
    getch(); 
    return 0;

}