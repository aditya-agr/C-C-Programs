#include<stdio.h>
#include<conio.h>
int main(){

    int e, i, j, average, sum = 0;
    
    printf("Enter the no. of elements in the array :");
    scanf("%d", &e);

    int m1[e];

    printf("Enter the elements of array :");
    for (i = 0; i < e; i++)
        scanf("%d", &m1[i]);

    for (i = 0; i < e; i++)
        sum = sum + m1[i];

    average = sum/e;

    printf("The total of the elements of array is %d.\n", sum);
    printf("The average of the elements of array is %d.\n", average);

    getch();
    return 0;
}