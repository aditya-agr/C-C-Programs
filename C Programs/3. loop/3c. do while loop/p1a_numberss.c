#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    printf("\nEnter the number : ");
    scanf("%d", &a);

    int i = 1;
    do{
        printf("%d \n", i);
        i = i + 1;
    }while(i <= a);
    
    getch(); 
}