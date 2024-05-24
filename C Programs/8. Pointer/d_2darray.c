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
    int **add_add;

    printf("Enter the elements of Array :");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }
    
    add = &arr[0][0];
    add_add = &add;

    printf("The elements of Array are ");
    printf("{");
        for (i = 0; i < r1*c1; i++)
            printf(" %d ", *(*add_add + i));
    printf("}");

    printf("The address of elements of Array are ");
    printf("{");
        for (i = 0; i < r1*c1; i++)
            printf(" %d ", add + i);
    printf("}");
    

    getch(); 
    return 0;
}