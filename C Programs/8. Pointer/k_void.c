#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    float b;
    char c;
    void *ptr;

    printf("Enter a integer number :");
    scanf("%d", &a);
    printf("Enter a float number :");
    scanf("%f", &b);
    printf("Enter a character :");
    scanf(" %c", &c);

    ptr = &a;
    printf("The integer number is %d.\n", *((int *)ptr));
    ptr = &b;
    printf("The float number is %f.\n", *((float *)ptr));
    ptr = &c;
    printf("The character is %c.\n", *((char *)ptr));

    getch();    
    return 0;
}