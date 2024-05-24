#include<stdio.h>
#include<conio.h>
int main()
{
    int e, i;
    
    printf("Enter the no. of elements in the Array :");
    scanf("%d", &e);

    int arr[e];
    int *ptr[e];

    printf("Enter the elements of Array :");
    for (i = 0; i < e; i++)
        scanf("%d", &arr[i]);
    
    for (i = 0; i < e; i++)
        ptr[i] = &arr[i];

    printf("The element of Array are :");
    printf("{");
    for (i = 0; i < e; i++)
        printf("  %d  ", *ptr[i]);
    printf("}");

    getch(); 
    return 0;
}