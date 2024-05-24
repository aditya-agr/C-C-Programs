#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, c, i;
    int *ptr[3];

    printf("Enter the First Number :");
    scanf("%d", &a);
    printf("Enter the Second Number :");
    scanf("%d", &b);
    printf("Enter the Third Number :");
    scanf("%d", &c);

    ptr[0] = &a;
    ptr[1] = &b;
    ptr[2] = &c;

    printf("The Numbers are :");
    printf("{");
    for (i = 0; i < 3; i++)
        printf("  %d  ", *ptr[i]);
    printf("}");

    getch(); 
    return 0;
}