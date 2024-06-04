#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int base, base2, remainder, i, dot, size, integer;
    float decimal=0, point;
    char num[100] = {}, num2[100] = {};

    printf("Enter the base in which you want to enter number :");
    scanf("%d", &base);
    printf("Enter the Number :");
    scanf("%s", &num);

    for(i=0; i<strlen(num); i++){
        if (num[i] == '.')
            dot = i;
    }

    for(i=0; i<strlen(num); i++){
        if (num[i] != '.'){
            if (dot - i < 0){
                if(num[i] >= '0' && num[i] <= '9')
                    decimal = decimal + (num[i]-'0')*pow(base, dot-i);
                else if (num[i] >= 'A' && num[i] <= 'Z')
                    decimal = decimal + (num[i]-'A'+10)*pow(base, dot-i);
                else if (num[i] >= 'a' && num[i] <= 'z')
                    decimal = decimal + (num[i]-'a'+10)*pow(base, dot-i);
            }
            else{
                if(num[i] >= '0' && num[i] <= '9')
                    decimal = decimal + (num[i]-'0')*pow(base, dot-i-1);
                else if (num[i] >= 'A' && num[i] <= 'Z')
                    decimal = decimal + (num[i]-'A'+10)*pow(base, dot-i-1);
                else if (num[i] >= 'a' && num[i] <= 'z')
                    decimal = decimal + (num[i]-'a'+10)*pow(base, dot-i-1);
            }
        }
    }

    printf("Enter the base in which you want to convert number :");
    scanf("%d", &base2);

    integer = (int)decimal;
    point = decimal - integer;

    char temp;
    i = 0;
    while(integer != 0){
        remainder = integer % base2;
        if(remainder >= 0 && remainder <= 9)
            temp = remainder + '0';
        else if(remainder >= 10 && remainder <= 25)
            temp = 'A' + remainder - 10;
        num2[i] = temp;
        integer = integer / base2;
        i++;
    }
    printf("%s", num2);

    char no[100] = {};
    size = strlen(num2);
    for(i=0; i<size; i++){
        no[i] = num2[size-i-1];
    }
    
    no[i] = '.';
    i++;

    while (i < 40 && point != 0){
        remainder = (int)(point * base2);
        if(remainder >= 0 && remainder <= 9)
            temp = remainder + '0';
        else if(remainder >= 10 && remainder <= 25)
            temp = 'A' + remainder - 10;
        no[i] = temp;
        point = (point*base2) - remainder; 
        i++;
    }

    printf("The Converted Number is %s ", no);

    return 0;
}