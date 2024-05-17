#include<stdio.h>
#include<conio.h>
int main(){

    int e, i, j, sum = 0;
    
    printf("Enter the no. of elements in the Matrix :");
    scanf("%d", &e);

    int m1[e];

    printf("Enter the elements of  Matrix :");
    for (i = 0; i < e; i++)
        scanf("%d", &m1[i]);

    for (i = 0; i < e; i++)
        sum = sum + m1[i];

    printf("The sum of the elements of matrix is %d.", sum);

    getch();
    return 0;
}