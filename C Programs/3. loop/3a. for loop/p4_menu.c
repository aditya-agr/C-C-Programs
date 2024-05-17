#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
int main()
{
    int choice, n, t1=0, t2=1, i=1, j=1, b, p, v, sum=0, rem, count, digits;

    while (i = 1){

        printf("\n\nChoose any option :\n");
        printf("1. Fibonacci series.\n");
        printf("2. Factorial of a number.\n");
        printf("3. Prime or not.\n");
        printf("4. Input power of a input base.\n");
        printf("5. Table of a number.\n");
        printf("6. Prime numbers from 1 to n.\n");
        printf("7. Armstrong numbers from 1 to n.\n");
        printf("8. Exit.\n");
        
        printf("Enter the choice :");
        scanf("%d", &choice);

        switch (choice){
        case 1:
            printf("Enter the number of terms :");
            scanf("%d", &n);
            while (i <= n){
                printf("%d ", t1);
                t2 = t1 + t2;
                t1 = t2 - t1;
                i = i + 1;
            }
            break;


        case 2:
            printf("Enter the number :");
            scanf("%d", &n);
            while (i <= n){
                j = j * i;
                i = i + 1;
            }
            printf("The factorial of %d is %d.", n, j);
            break;


        case 3:
            printf("Enter the number :");
            scanf("%d", &n);
            i = 2;
            while(i < n){ 
                if (n % i == 0 )
                    j = 2;
                i = i + 1;
            }
            if (j == 2)
                 printf("This number %d is not a prime number.", n);
            else
                 printf("This number %d is a prime number.", n);
            break;


        case 4:
            printf("\nEnter the base number :");
            scanf("%d", &b);
            printf("\nEnter the power:");
            scanf("%d", &p);
            v = pow(b, p);
            printf("The power %d to the base %d is %d.", p, b, v);
            break;


        case 5:
            printf("Enter the number :");
            scanf("%d", &n);
            printf("\nThe table of %d is :", n);   
            while (i < 11){
                printf("\n %d X %d = %d", n, i, n*i);
                i = i + 1;
            } 
            break;


        case 6:
            printf("Enter the number :");
            scanf("%d", &n);
            printf("The prime numbers between 1 and %d :\n", n);
            j = 2;
            while (j <= n){
                count = 0;
                i = 2;
                while(i < j){ 
                    if (j % i == 0 ){
                        count = 1;
                    }
                    i = i + 1;
                }
                if (count == 0){
                    printf("%d ", j);
                }
                j = j + 1; 
            }
            break;

        case 7:
            printf("Enter the number :");
            scanf("%d", &n);
            printf("The Armstrong numbers between 1 and %d :\n", n);
            while(i <= n){
                count = i;
                sum = 0;
                digits = (int) log10(i) + 1;
                while (count > 0){ 
                    rem = count % 10;
                    sum = sum + ceil(pow(rem, digits));
                    count = count / 10;
                }
                if (i == sum){
                printf("%d ", i);
                }
                i = i + 1;
            }


        case 8:
            printf("The prrogram is closed.");
            exit(1);

        default:
            printf("The entered option is incorrect.");
        }

    }
    getch();

    return 0;
}