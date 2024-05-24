#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, c;
    int *ptra, *ptrb, *ptrc;

    printf("Enter the First Number :");
    scanf("%d", &a);
    printf("Enter the Second Number :");
    scanf("%d", &b);
    printf("Enter the Third Number :");
    scanf("%d", &c);

    ptra = &a;
    ptrb = &b;
    ptrc = &c;

    printf("The First number is %d.\n", *ptra);
    printf("The Second number is %d.\n", *ptrb);
    printf("The Third number is %d.\n", *ptrc);

    getch(); 
    return 0;
}