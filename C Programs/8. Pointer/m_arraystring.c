#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i;
    char names[5][10];
    char (*ptr)[10];             //char (*ptr)[5][10] = NULL;

    printf("Enter the Names :");
    for(i=0; i<5; i++)    
        scanf("%s", &names[i][10]);

    ptr = names;                 //ptr = &names;

    printf("The Names are :");
    for(i=0; i<5; i++)
        printf("%s\n", ptr[i]);  //printf("%s\n", (*ptr)[i]); 


    for(i=0; i<5; i++)
        printf("%s\n", *(&names[i][10]));

    getch(); 
    return 0; 
}