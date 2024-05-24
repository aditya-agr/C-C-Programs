#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, c, i, j, k;
    
    printf("Enter the first dimension of Array :");
    scanf("%d", &a);
    printf("Enter the second dimension of Array :");
    scanf("%d", &b);
    printf("Enter the third dimension of Array :");
    scanf("%d", &c);

    int arr[a][b][c];
    int *add;

    printf("Enter the elements of Array :");
        for (i = 0; i < a; i++)
        {
            for (j = 0; j < b; j++)
            {
                for (k = 0; k < c; k++)
                {
                    scanf("%d", &arr[i][j][k]);
                }
            }
        }
    
    add = &arr[0][0][0];

    printf("The elements of Array are ");
    printf("{");
        for (i = 0; i < a*b*c; i++)
            printf(" %d ", *(add + i));
    printf("}");
    
    printf("The elements of Array are ");
    printf("\n{");
    for (i = 0; i < a; i++)
    {
        printf("\n{");
        for (j = 0; j < b; j++)
        {
            printf("\n{");
            for (k = 0; k < c; k++)
            {
                printf("  %d  ", *(*(*(arr+i) + j) + k));
            }
            printf("}");
        }
        printf("}");
    }
    printf("}");

    getch(); 
    return 0;
}