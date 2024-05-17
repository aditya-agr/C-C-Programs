#include<stdio.h>
#include<conio.h>
int main(){

    int e, i, j, find, countodd=0, counteven=0, sum = 0;
    
    printf("Enter the no. of elements in the array :");
    scanf("%d", &e);

    int m1[e], indices[e];

    printf("Enter the elements of  array :");
    for (i = 0; i < e; i++)
        scanf("%d", &m1[i]);

    printf("The Even numbers are :\n");
    for (i = 0; i < e; i++){
        if ( m1[i] % 2 == 0){
            counteven += 1;
            printf("%d\t", m1[i]);
        }       
    }
    printf("\nThere are %d Even numbers.\n\n", counteven);

    printf("\nThe Odd numbers are :\n");
    for (i = 0; i < e; i++){
        if ( m1[i] % 2 != 0){
            countodd += 1;
            printf("%d\t", m1[i]);
        }       
    }
    printf("\nThere are %d Odd numbers.", countodd);

    getch();
    return 0;
}