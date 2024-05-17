#include <stdio.h>
#include <conio.h>
void main()
{
    float s, a;
    printf("\nEnter your salary : ");
    scanf("%f", &a);

    if (a < 1500){
        s = a + a*0.1 + a*0.9;
        printf("Your gross total salary after adding 10%% HRA and 90%% DA is %f", s);
    }
    else{
        s = a + 500.0 + a*0.98;
        printf("Your gross total salary after adding RS.500 HRA and 98%% DA is %f", s);
    }
    getch();

}
