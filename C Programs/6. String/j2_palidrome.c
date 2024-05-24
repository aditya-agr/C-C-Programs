#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char string[50];
    int i, n, pali=0;

    printf("Enter Your string :");
    scanf("%s", &string);

    n = strlen(string);

    for(i=0; i < n/2; i++){
        if(string[i] == string[n-i-1])
            pali++;
    }

    if(pali == n/2)  
        printf("The entered string %s is palidrome.", string);
    else
        printf("The entered string %s is not palidrome.", string);

    getch(); 
    return 0;
}