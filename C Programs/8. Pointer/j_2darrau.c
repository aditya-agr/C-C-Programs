#include<stdio.h>
#include<conio.h>
int main()
{
    int r1, c1, i, j;
    
    printf("Enter the no. of rows of Array :");
    scanf("%d", &r1);
    printf("Enter the no. of columns of Array :");
    scanf("%d", &c1);

    int arr[r1][c1];
    int *ptr[r1][c1];

    printf("Enter the elements of Array :");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }
    
    for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                ptr[i][j] = &arr[i][j];
            }
        }

    printf("The elements of Array are ");
    printf("\n{");
    for (i = 0; i < r1; i++)
        {
            printf("\n{");
            for (j = 0; j < c1; j++)
            {
                printf("  %d  ", *ptr[i][j]);
            }
            printf("}");
        }
    printf("}");

    getch(); 
    return 0;
}