#include<stdio.h>
#include<conio.h>

int sum(int num1, int num2){
    return num1 + num2;
}
int main()
{
    int a, b, sum2;
    int (*fptr)(int, int);

    fptr = &sum;

    printf("Enter the first number :");
    scanf("%d", &a);
    printf("Enter the second number :");
    scanf("%d", &b);

    sum2 = (*fptr)(a, b);

    printf("The sum of the numbers is %d.", sum2);
    getch(); 
    return 0;
}