#include<stdio.h>
#include<conio.h>
int main(){

    int r1, c1, i, j, sum = 0;
    
    printf("Enter the no. of rows of Matrix :");
    scanf("%d", &r1);
    printf("Enter the no. of columns of Matrix :");
    scanf("%d", &c1);

    int m1[r1][c1];

    printf("Enter the elements of  Matrix :");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            sum = sum + m1[i][j];
        }
    }
    printf("The sum of the elements of matrix is %d.", sum);

    getch();
    return 0;
}