#include<stdio.h>
#include<conio.h>
int main(){

    int r1, c1, i, j, sum = 0;
    
    printf("Enter the no. of rows of Matrix :");
    scanf("%d", &r1);
    printf("Enter the no. of columns of Matrix :");
    scanf("%d", &c1);

    int m1[r1][c1], m2[c1][r1];

    if(r1 == c1){
        printf("Enter the elements of First Matrix :");
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
                m2[j][i] = m1[i][j];
            }
        }

        printf("\nThe transpose of the matrix is :");
        for (i = 0; i < c1; i++)
        {
            printf("\n");
            for (j = 0; j < r1; j++)
                printf("%d\t", m2[i][j]);
        }

    }
    else{
        printf("The tranpose cannot be performed.");
    }
    
    getch();
    return 0;
}