#include<stdio.h>
#include<conio.h>
int main(){

    int e, i, j, find, sumEven=0, sumOdd=0;
    
    printf("Enter the no. of elements in the array :");
    scanf("%d", &e);

    int m1[e], indices[e];

    printf("Enter the elements of  array :");
    for (i = 0; i < e; i++)
        scanf("%d", &m1[i]);


    for (i = 0; i < e; i++){
        if ( m1[i] % 2 == 0)
            sumEven += m1[i];
        else
            sumOdd += m1[i];    
    }

    printf("The total of the even elements of array is %d.\n", sumEven);
    printf("The total of the odd elements of array is %d.\n", sumOdd);

    getch();
    return 0;
}