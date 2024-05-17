#include<stdio.h>
#include<conio.h>
int main(){

    int e, i, sum = 0;
    
    printf("Enter the no. of elements in the array :");
    scanf("%d", &e);

    int m1[e];

    printf("Enter the elements of array :");
    for (i = 0; i < e; i++)
        scanf("%d", &m1[i]);

        sum = m1[0] + m1[e-1];

    printf("The sum of first and last element of array is %d.\n", sum);
         
    getch();
    return 0;

}
    