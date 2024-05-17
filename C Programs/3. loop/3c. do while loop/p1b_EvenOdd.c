#include <stdio.h>
#include <conio.h>
void main()
{
    int i = 0, j = 0, a;
    printf("\nEnter the number : ");
    scanf("%d", &a);

    printf("Even numbers are :\n");
    do
    {
        if (i % 2 == 0)
        {
            printf("%d \n", i);
        }
        i = i + 1;
    } while (i <= a);

    printf("Odd numbers are :\n");
    do
    {
        if (j % 2 != 0)
        {
            printf("%d \n", j);
        }
        j = j + 1;
    } while (j <= a);

    getch(); 
}
