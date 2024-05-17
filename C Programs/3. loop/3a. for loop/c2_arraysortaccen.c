#include<stdio.h>
#include<conio.h>
int main(){

    int n, i, j, temp;
    
    printf("Enter the no. of elements in the Matrix :");
    scanf("%d", &n);

    int m1[n];

    printf("Enter the elements of  Matrix :");
    for (i = 0; i < n; i++)
        scanf("%d", &m1[i]);

    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - 1 - i; j++){
            if(m1[j] > m1[j + 1]){
                temp = m1[j];
                m1[j] = m1[j + 1];
                m1[j + 1] = temp;
            }
        }
    }
    
    for (i = 0; i < n; i++)
        printf("%d \t", m1[i]);

    getch();
    return 0;
}