#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c;
    printf("\nEnter the first number(a) : ");
    scanf("%d", &a);
    printf("\nEnter the second number(b) : ");
    scanf("%d", &b);
    printf("\nEnter the third number(c) : ");
    scanf("%d", &c);

    if (a < b)
    {
        if (b < c)
            printf("The c is maximum of all a, b and c.");
        else if (a = c)
            printf("The b is maximum of all a, b and c. The  a and c are same.");
        else if (b = c)
            printf("The b and c are maximum of all a, b and c.");
        else
            printf("The b is maximum of all a, b and c.");
    }
    else if (a > b)
    {
        if (c > a)
            printf("The c is maximum of all a, b and c.");
        else if (a = c)
            printf("The a and c are maximum of all a, b and c.");
        else if (b = c)
            printf("The a is maximum of all a, b and c. The b and c are same");
        else
            printf("The a is maximum of all a, b and c.");
    }
    else if (a = b)
    {
        if (a < c)
            printf("The c is maximum of all a, b and c. The  a and  b are same");
        else if(a = c)
            printf("All the numbers are same");
        else
            printf("The a and b are maximum of all a, b and c.");
    }
    getch();
}
