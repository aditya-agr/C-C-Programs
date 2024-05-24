#include <stdio.h>
#include <conio.h>
int main()
{
    int num;
    int *address;
    printf("Enter a number :");
    scanf("%d", &num);
    address = &num;
    printf("The address ofnumber is %d.", address);

    getch(); 
    return 0;
}