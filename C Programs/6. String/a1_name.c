#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char name[10];
    printf("Enter Your Name :");
    scanf("%s", &name);  //gets(name);

    printf("The first letter of the Name is %c.", name[0]); //puts(name);
    getch(); 
    return 0;
}