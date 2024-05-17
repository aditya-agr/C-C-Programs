#include <stdio.h>
#include <conio.h>
void main()
{
    float s1, s2, s3, s4, s5, t, p;

    printf("\nEnter the marks obtained in 1st subject : ");
    scanf("%f", &s1);
    printf("\nEnter the marks obtained in 2nd subject : ");
    scanf("%f", &s2);
    printf("\nEnter the marks obtained in 3rd subject : ");
    scanf("%f", &s3);
    printf("\nEnter the marks obtained in 4th subject : ");
    scanf("%f", &s4);
    printf("\nEnter the marks obtained in 5th subject : ");
    scanf("%f", &s5);

    t = s1 + s2 + s3 + s4 + s5;
    p = t / 5;

    if (p >= 60)
        printf("You are passed by First Division");
    else if (p >= 50)
        printf("You are passed by Second Division");
    else if (p >= 40)
        printf("You are passed by Third Division");
    else if (p < 40)
        printf("You are failed");

    getch();
}