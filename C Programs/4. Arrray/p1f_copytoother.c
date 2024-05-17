#include<stdio.h>
#include<conio.h>
int main(){

    int e, i, j, count, max = 0;
    
    printf("Enter the no. of elements in the Matrix :");
    scanf("%d", &e);

    int m1[e], m2[e];

    printf("Enter the elements of  Matrix :");
    for (i = 0; i < e; i++)
        scanf("%d", &m1[i]);

    for (i = 0; i < e; i++)
            m1[i] = m2[i];

    for (i = 0; i < e; i++)
        printf("%d", m2[i]);
        
    getch();
    return 0;

}
    