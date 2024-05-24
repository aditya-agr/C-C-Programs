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
    int *add;

    printf("Enter the elements of Array :");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }
    
    add = &arr[0][0];

    printf("The elements of Array are ");
    printf("{");
        for (i = 0; i < r1*c1; i++)
            printf(" %d ", *(add + i));
    printf("}\n");

    printf("The elements of Array are ");
    printf("\n{");
    for (i = 0; i < r1; i++)
        {
            printf("\n{");
            for (j = 0; j < c1; j++)
            {
                printf("  %d  ", *(*(arr+i) + j));
            }
            printf("}");
        }
    printf("}");

    getch(); 
    return 0;
}