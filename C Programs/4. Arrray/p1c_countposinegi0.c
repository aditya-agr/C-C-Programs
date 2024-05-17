#include<stdio.h>
#include<conio.h>
int main(){

    int e, i, j, find, countnegative=0, countpositive=0, countzero=0,sum = 0;
    
    printf("Enter the no. of elements in the array :");
    scanf("%d", &e);

    int m1[e], indices[e];

    printf("Enter the elements of  array :");
    for (i = 0; i < e; i++)
        scanf("%d", &m1[i]);

    printf("The Positive numbers are :\n");
    for (i = 0; i < e; i++){
        if ( m1[i] > 0){
            countpositive += 1;
            printf("%d\t", m1[i]);
        }       
    }
    printf("\nThere are %d Positive numbers.\n\n", countpositive);

    printf("\nThe Negative numbers are :\n");
    for (i = 0; i < e; i++){
        if ( m1[i] < 0){
            countnegative += 1;
            printf("%d\t", m1[i]);
        }       
    }
    printf("\nThere are %d Negative numbers.\n\n", countnegative);

    printf("\nThe Zeros are :\n");
    for (i = 0; i < e; i++){
        if ( m1[i] == 0){
            countzero += 1;
            printf("%d\t", m1[i]);
        }       
    }
    printf("\nThere are %d Zeros.", countzero);

    getch();
    return 0;
}