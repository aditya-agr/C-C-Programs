#include <stdio.h>
#include <conio.h>
void main()
{
    int cp, sp, p, l;

    printf("\nEnter the Cost Price of product : ");
    scanf("%d", &cp);
    printf("\nEnter the Selling Price of product : ");
    scanf("%d", &sp);

    p = sp - cp;
    l = -p;

    if (p > 0){
       printf("The product is selled with profit of %d", p);
    }
    else{
        printf("The product is selled with loss of %d", l);
    }
    getch();


}
