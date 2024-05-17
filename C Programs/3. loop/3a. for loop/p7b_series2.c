#include<stdio.h>
#include<conio.h>
int main(){
    int i, j, n;
    float  fact, sum = 0;

    printf("\n1/1! + 2/2! + 3/3! + 4/4! + ...... + n/n!");
    printf("\nEnter the number of terms : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        fact = 1; 
        for(j = 1; j <= i; j++){
            fact = fact * j;
        }
        sum = sum + (i/fact);
    }
    printf("\nThe sum of the series is %f.", sum);
    getch(); 
    return 0;
}