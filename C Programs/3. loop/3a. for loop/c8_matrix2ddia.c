#include<stdio.h>
#include<conio.h>
int main(){

    int r1, c1, i, j, sum = 0;
    
    printf("Enter the no. of rows of Matrix :");
    scanf("%d", &r1);
    printf("Enter the no. of columns of Matrix :");
    scanf("%d", &c1);

    int m1[r1][c1];

    if(r1 == c1){
        printf("Enter the elements of First Matrix :");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", &m1[i][j]);
            }
        }

        printf("The diagonal elements are :\n");
        for (i = 0; i < r1; i++)
        {
            printf("\n");
            for (j = 0; j < c1; j++)
            {
                if(i == j){
                    sum = sum + m1[i][j];
                    printf("%d  ", m1[i][j]);
                }
                else{
                    printf("   ");
                }
                
            }
        }
        printf("\nThe sum of the diagonal elements of the matrix is %d .", sum);
    }
    else{
        printf("The addition cannot be performed.");
    }
    
    getch();
    return 0;
}