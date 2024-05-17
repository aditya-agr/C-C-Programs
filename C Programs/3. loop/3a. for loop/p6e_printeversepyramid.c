#include<stdio.h>
int main(){
    int i, j, num;

    printf("Enter the number of Rows : ");
    scanf("%d", &num);

    for(i = 0; i <= num; i++){ 
        printf("\n");
        for (j = 0; j < i; j++)
            printf(" ");
        for (j = 0; j < 2*num - 2*i - 1; j++)
            printf("*");
    }

    return 0;
}