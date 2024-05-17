#include<stdio.h>
#include<conio.h>
int main(){

    int r1, r2, c1, c2, i, j, k;
    
    printf("Enter the no. of rows of First Matrix :");
    scanf("%d", &r1);
    printf("Enter the no. of columns of First Matrix :");
    scanf("%d", &c1);

    printf("Enter the no. of rows of Second Matrix :");
    scanf("%d", &r2);
    printf("Enter the no. of columns of Second Matrix :");
    scanf("%d", &c2);

    int m1[r1][c1], m2[r2][c2];

    if(c1 == r2){
        printf("Enter the elements of First Matrix :");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", &m1[i][j]);
            }
        }

        printf("Enter the elements of Second Matrix :");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                scanf("%d", &m2[i][j]);
            }
        }

        int m[r1][c2];

        printf("The multiplication of two matrices is :");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                m[i][j] = 0;
                for (k = 0; k < r2; k++){
                    m[i][j] = m[i][j] + (m1[i][k] * m2[k][j]);
                }
            }
        }

        for (i = 0; i < r1; i++)
        {
            printf("\n");
            for (j = 0; j < c2; j++)
                printf("%d\t", m[i][j]);
        }

    }
    else{
        printf("The multiplication cannot be performed.");
    }
    
    getch();
    return 0;
}