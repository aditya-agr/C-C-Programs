#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("\nEnter the number : ");
    scanf("%d", &a);

    int i = 1;
    while(i < a){
        printf("%d \n", i);
        i = i + 1;
    }
    getch(); 
    return 0;
}