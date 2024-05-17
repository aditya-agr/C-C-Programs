#include<stdio.h>
#include<conio.h>
int main(){
    int i, j, a, num;

    printf("Enter the number of Rows : ");
    scanf("%d", &num);

    for(i = 0; i <= num; i++){ 
        printf("\n");
        for (j = 0; j < num - i; j++)
            printf(" ");
            a = 2 * i - 1;
        for (j = 0; j < a; j++)
            printf("%d", a);
    }
    getch();
    return 0;
}