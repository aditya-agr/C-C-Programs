#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    printf("\nEnter the number : ");
    scanf("%d", &a);

    if (a % 2 == 0){
        printf("The entered number %d is a even number.", a);
    }
    else{
       printf("The entered number %d is a odd number.", a);
    }
    getch();

}
