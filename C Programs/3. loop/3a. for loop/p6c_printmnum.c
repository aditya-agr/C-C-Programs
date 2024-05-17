#include<stdio.h>
#include<conio.h>
int main(){
    int i, j, num;

    printf("Enter the number of Rows : ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){ 
        printf("\n");
        for (j = 1; j <= i; j++)
            printf("%d\t", i * j);
    }
    getch();
    return 0;
}