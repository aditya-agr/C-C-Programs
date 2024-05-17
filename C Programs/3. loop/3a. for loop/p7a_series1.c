#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int i, x, num;
    float term, sum, temp ;

    printf("\n1/2(x-1/x) + 1/2(x-1/x)^2 + 1/2(x-1/x)^3 + 1/2(x-1/x)^4 + ....");
    printf("\nEnter the base number : ");
    scanf("%d", &x);
    printf("\nEnter the number of terms : ");
    scanf("%d", &num);

    term = x - 1;
    term = term / x;

    for(i = 1; i <= num; i++){
        sum = sum + (0.5*pow(term, i));
    }
    printf("the sum of the series is %f.", sum);
    getch(); 
    return 0;
}