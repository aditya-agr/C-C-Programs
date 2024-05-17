#include <stdio.h>
#include <conio.h>
#include<math.h>
int main()
{
    int i, remainder, temp =0, temp2=0, num, num2;

    printf("\nEnter the 5 digit number : ");
    scanf("%d", &num);
    num2 = num;

    for (num , i=0; num != 0; num = num / 10 , i++){
        remainder = num % 10;
        temp = remainder + 1;
            if(remainder == 9){
                temp = 0;
            }
        temp2 = temp2 + temp*ceil(pow(10, i));
    }

    printf("\nThe number is %d", num2);
    printf("\nThe new number is %d", temp2);

    getch(); 
    return 0;
}