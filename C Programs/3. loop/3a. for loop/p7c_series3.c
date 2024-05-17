#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int i, x, sum = 0, num;

    printf("\n1 + x + x^2 + x^3 + x^4 + x^5 + ..... + x^n");
    printf("\nEnter the base number : ");
    scanf("%d", &x);
    printf("\nEnter the number of terms : ");
    scanf("%d", &num);

    for(i = 0; i < num; i++){
        sum += pow(x, i);
    }
    printf("the sum of he series is %d", sum);
    getch(); 
    return 0;
}