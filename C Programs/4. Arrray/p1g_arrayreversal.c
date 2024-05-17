#include<stdio.h>
#include<conio.h>
int main(){

    int e, i, j, temp = 0;
    
    printf("Enter the no. of elements in the Matrix :");
    scanf("%d", &e);

    int m1[e];

    printf("Enter the elements of  Matrix :");
    for (i = 0; i < e; i++)
        scanf("%d", &m1[i]);

    printf("The array before reversing\n");
    for (i = 0; i < e; i++)
        printf("%d\t", m1[i]);

    /*for (i = 0; i < e/2; i++){                  //TYPE 1
        temp = m1[i];
        m1[i] = m1[e-i-1];
        m1[e-i-1] = temp;
    }*/

    for (i = 0 ,j = e-1; i < e/2; i++ ,j--){      //TYPE 2
        temp = m1[i];
        m1[i] = m1[j];
        m1[j] = temp;
    }

    printf("\nThe array after reversing\n");
    for (i = 0; i < e; i++)
        printf("%d\t", m1[i]);

    getch();
    return 0;
}