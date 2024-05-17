#include<stdio.h>
#include<conio.h>
int main(){

    int e, i, j, find, count, sum = 0;
    
    printf("Enter the no. of elements in the Matrix :");
    scanf("%d", &e);

    int m1[e], indices[e];

    printf("Enter the elements of  Matrix :");
    for (i = 0; i < e; i++)
        scanf("%d", &m1[i]);

    printf("Enter the number to find :");
    scanf("%d", &find);

    count = 0;
    indices[e] = 0;
    for (i = 0; i < e; i++){
        if(find == m1[i]){
            indices[count] = i;
            count = count + 1;
        }
    }

    if(count != 0){
        printf("The number is found at %d positions in :\n", count);
        for (i = 0; i < count; i++)
            printf("%d ", indices[i] + 1);
        printf("place");
    }
    else
        printf("The number is not found\n");

    getch();
    return 0;
}