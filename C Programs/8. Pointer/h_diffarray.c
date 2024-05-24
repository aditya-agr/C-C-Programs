#include<stdio.h>
#include<conio.h>
int main()
{
    int e, i;
    int *ptra, *ptrb, *ptrc, *ptrd;

    printf("Enter the no. of elements in the Array :");
    scanf("%d", &e);

    int arr[e];

    printf("Enter the elements of Array :");
    for (i = 0; i < e; i++)
        scanf("%d", &arr[i]);

    ptra = &arr[0];
    ptrb = &arr[1];
    ptrc = &arr[2];
    ptrd = &arr[3];

    printf("The numbers are :\n");
    for(i=0; i<e; i++)
        printf("%d  ", *(ptra + i));

    printf("The numbers are :\n");
    for(i=-1; i<e-1; i++)
        printf("%d  ", *(ptrb + i));

    printf("The numbers are :\n");
    for(i=-2; i<e-2; i++)
        printf("%d  ", *(ptrc + i));

    printf("The numbers are :\n");
    for(i=-3; i<e-3; i++)
        printf("%d  ", *(ptrd + i));

    getch(); 
    return 0;
}

