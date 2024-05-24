#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int *ptr, r, c, n, i, j;
    printf("Enter the number of rows of Array : ");
    scanf("%d", &r);
    printf("Enter the number of columns of Array : ");
    scanf("%d", &c);

    n = r*c;

    ptr = (int*)malloc(n*sizeof(int));
    //ptr = (int*)calloc(n, sizeof(int));

    printf("Enter the elements.\n ");
    for(i=0; i<n; i++)
        scanf("%d", &ptr[i]);

    printf("The elements of the Array :\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++)
            printf("%d  ", ptr[i*c + j]);
        printf("\n");
    }

    free(ptr);

    getch();    
    return 0;
}