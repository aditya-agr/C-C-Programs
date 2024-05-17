#include<stdio.h>
#include<conio.h>
int main(){
    int i, sum = 0, n;

    printf("\n1*2 + 2*3 + 3*4 + 4*5 + ...... + n*n+1");
    printf("\nEnter the number of terms : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        sum += i * (i+1);
    }
    printf("the sum of the series is %d.", sum);

    getch(); 
    return 0;
}