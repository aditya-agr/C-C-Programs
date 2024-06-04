#include<stdio.h>
#include<math.h>
int main()
{
    int base, num, base2, num2=0, decimal=0, remainder, i;
    printf("Enter the base in which you want to enter number :");
    scanf("%d", &base);
    printf("Enter the Number :");
    scanf("%d", &num);

    i = 0;
    while(num != 0){
        remainder = num % 10;
        decimal = decimal + remainder * pow(base, i);
        num = num / 10;
        i++;
    }

    printf("Enter the base in which you want to convert number :");
    scanf("%d", &base2);

    i = 0;
    while(decimal != 0){
        remainder = decimal % base2;
        num2 = num2 + remainder * pow(10, i);
        decimal = decimal / base2;
        i++;
    }

    printf("The Converted Number is %d.", num2);

    return 0;
}