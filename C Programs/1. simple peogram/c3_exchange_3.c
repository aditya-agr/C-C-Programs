#include <stdio.h>
#include <conio.h>
void main()
{
    int n1, n2, n3;

    printf("\nEnter the first number (n1) : ");
    scanf("%d", &n1);
    printf("\nEnter the second number (n2) : ");
    scanf("%d", &n2);
    printf("\nEnter the third number (n3) : ");
    scanf("%d", &n3);

    n1 = n1 + n2 + n3;
    n2 = n1 - n2 - n3;
    n3 = n1 - n2 - n3;
    n1 = n1 - n2 - n3; 

    printf("***After swapping*****");
    printf("\nThe first number is %d", n1);
    printf("\nThe second number is %d", n2);
    printf("\nThe third number is %d", n3);

    getch();
}