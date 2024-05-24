#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int *ptr, n, i;
    printf("Enter the number of elements of Array : ");
    scanf("%d", &n);

    //ptr = (int*)malloc(n*sizeof(int));
    ptr = (int*)calloc(n, sizeof(int));

    printf("Enter the elements.\n ");
    for(i=0; i<n; i++)
        scanf("%d", &ptr[i]);

    printf("The elements of the Array :");
    for(i=0; i<n; i++)
        printf("%d\n", ptr[i]);



    printf("Enter the number of elements of Array : ");
    scanf("%d", &n);

    ptr = realloc(ptr, n * sizeof(int));

    printf("Enter the elements.\n ");
    for(i=0; i<n; i++)
        scanf("%d", &ptr[i]);

    printf("The elements of the Array :");
    for(i=0; i<n; i++)
        printf("%d\n", ptr[i]);

    free(ptr);

    getch(); 
    return 0;
}