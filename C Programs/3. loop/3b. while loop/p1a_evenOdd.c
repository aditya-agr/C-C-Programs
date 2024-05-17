#include <stdio.h>
#include <conio.h>
void main()
{
    int i=0, j=0, a;
    printf("\nEnter the number : ");
    scanf("%d", &a);

    printf("Even numbers are :\n");
    while(i <= a){
        if( i % 2 == 0){
            printf("%d \n", i);
        }
        i = i + 1;
    }

    printf("Odd numbers are :\n");
    while(j <= a){
        if( j % 2 != 0){
            printf("%d \n", j);
        }
        j = j + 1;
    }
    getch(); 
}