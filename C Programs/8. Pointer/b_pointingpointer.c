#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    int *add_a;
    int**add_add_a;

    printf("Enter the value of a :");
    scanf("%d", &a);

    add_a = &a;
    add_add_a = &add_a;

    printf("The value of a is %d.\n", a);
    printf("The value of a is %d.\n", *add_a);
    printf("The value of a is %d.\n", **add_add_a);
    printf("The value of a is %d.\n", *&a);
    printf("The value of a is %d.\n", *(&a));

    printf("The address of a is %d.\n", &a);
    printf("The address of a is %d.\n", add_a);
    printf("The address of a is %d.\n", *add_add_a);

    printf("The address of pointer add_a is %d.\n", &add_a);
    printf("The address of pointer add_a is %d.\n", add_add_a);

    getch();    
    return 0;
}