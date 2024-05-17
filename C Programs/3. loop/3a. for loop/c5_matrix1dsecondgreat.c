#include<stdio.h>
#include<conio.h>
int main(){

    int e, i, j, greatest = 0, second_great = 0, count;
    
    printf("Enter the no. of elements in the Matrix :");
    scanf("%d", &e);

    int m1[e], indices[e];

    printf("Enter the elements of  Matrix :");
    for (i = 0; i < e; i++)
        scanf("%d", &m1[i]);

    for (i = 0; i < e; i++){
        if(greatest < m1[i])
            greatest = m1[i];
    }

    for (i = 0; i < e; i++){
        if(second_great < m1[i] && m1[i] < greatest)
            second_great = m1[i];
    }

    count = 0;
    indices[e] = 0;
    for (i = 0; i < e; i++){
        if(second_great == m1[i]){
            indices[count] = i;
            count = count + 1;
        }
    }

    printf("The second greatest of the elements of matrix is %d which occurs %d times.\n", second_great, count);
    printf("The second greatest element occurs at :\n");
    for (i = 0; i < count; i++)
        printf("%d ", indices[i] + 1);

    getch();
    return 0;
}