#include<stdio.h>
#include<conio.h>
int main(){

    int e, i, j, min, count;
    
    printf("Enter the no. of elements in the Matrix :");
    scanf("%d", &e);

    int m1[e], indices[e];

    printf("Enter the elements of  Matrix :");
    for (i = 0; i < e; i++)
        scanf("%d", &m1[i]);

    for (i = 0; i < e; i++){
        if(min > m1[i])
            min = m1[i];
    }

    count = 0;
    indices[e] = 0;
    for (i = 0; i < e; i++){
        if(min == m1[i]){
            indices[count] = i;
            count = count + 1;
        }
    }

    printf("The smallest of the elements of matrix is %d which occurs %d.\n", min, count);
    printf("The second smallest element occurs at :\n");
    for (i = 0; i < count; i++)
        printf("%d ", indices[i] + 1);

    getch();
    return 0;
}