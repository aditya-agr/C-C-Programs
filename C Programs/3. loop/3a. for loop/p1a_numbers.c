#include <stdio.h>
#include <conio.h>
void main()
{
    int i, a;
    printf("\nEnter the number : ");
    scanf("%d", &a);

    for (i = 0; i <= a; i++){
        printf("%d \n", i);
    }
    getch();
}