#include <stdio.h>
#include <conio.h>
void main()
{
    int i, a;
    printf("\nEnter the number : ");
    scanf("%d", &a);

    printf("Odd numbers are :\n");
    for (i = 0; i <= a; i++){
        if (i % 2 != 0)
        {
            printf("%d\n", i );
        }
    }

    printf("Even numbers are :\n");
    for (i = 0; i <= a; i++){
        if (i % 2 == 0) 
        {
            printf("%d\n", i );
        } 
    }
    getch();

}