#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int base, base2, remainder, decimal=0, i;
    char num[20], num2[20];
    printf("Enter the base in which you want to enter number :");
    scanf("%d", &base);
    printf("Enter the Number :");
    scanf("%s", &num);

    /*for(i=0; i<strlen(num); i++){
        if(num[i] >= '0' && num[i] <= '9')
            decimal = decimal + (num[i]-'0')*pow(base, strlen(num)-1-i);
        else if (num[i] >= 'A' && num[i] <= 'Z')
            decimal = decimal + (num[i]-'A'+10)*pow(base, strlen(num)-1-i);
        else if (num[i] >= 'a' && num[i] <= 'z')
            decimal = decimal + (num[i]-'a'+10)*pow(base, strlen(num)-1-i);
    }*/
    int size = strlen(num);
    int x=1;
    for(i=size-1; i>=0; i--){
        if(num[i] >= '0' && num[i] <= '9')
            decimal = decimal + (num[i]-'0')*x;
        else if (num[i] >= 'A' && num[i] <= 'Z')
            decimal = decimal + (num[i]-'A'+10)*x;
        else if (num[i] >= 'a' && num[i] <= 'z')
            decimal = decimal + (num[i]-'a'+10)*x;
        x *= base;
    }

    printf("Enter the base in which you want to convert number :");
    scanf("%d", &base2);

    char temp;
    i = 0;
    while(decimal != 0){
        remainder = decimal % base2;
        if(remainder >= 0 && remainder <= 9)
            temp = remainder + '0';
        else if(remainder >= 10 && remainder <= 25)
            temp = 'A' + remainder - 10;
        num2[i] = temp;
        decimal = decimal / base2;
        i++;
    }

    char no[20];
    size = strlen(num2);
    for(i=0; i<size; i++){
        no[i] = num2[size-i-1];
    }

    printf("The Converted Number is %s.", no);

    return 0;
}