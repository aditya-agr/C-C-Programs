#include<stdio.h>
#include<conio.h>
int main()
{
    int num1, num2, op;
    char char1;

    printf("\n\nChoose any option :\n");
    printf("1. Airthmetic Operstors.\n");
    printf("2. Modulo Operator.\n");
    printf("3. Logical Operators.\n");
    printf("4. Relational Operator.\n");
    printf("5. Bitwise Operator.\n");

    printf("\nEnter the Operator : ");
    scanf(" %d", &op);

    switch(op){
    case 1 :
        printf("\n\nChoose any option :\n");
        printf("a. +\n");
        printf("b. -\n");
        printf("c. *\n");
        printf("d. /\n");

        printf("\nEnter the character : ");
        scanf(" %c", &char1);

        printf("\nEnter the first number : ");
        scanf(" %d", &num1);
        printf("\nEnter the second number : ");
        scanf(" %d", &num2);

        switch (char1){
        case 'a':
            printf("The addition of %d and %d is %d", num1, num2, num1 + num2);
            break;
        case 'b':
            printf("The subtraction of %d and %d is %d", num1, num2, num1 - num2);
            break;
        case 'c':
            printf("The multiplication of %d and %d is %d", num1, num2, num1 * num2);
            break;
        case 'd':
            printf("The division of %d and %d is %d", num1, num2, num1 / num2);
            break;
        }
        break;

    case 2 :
        printf("\nThe modulo of the numbers is %d.", num1%num2);
        break;

    case 3 :
        printf("\n\nChoose any option :\n");
        printf("a. &&\n");
        printf("b. ||\n");
        printf("c. !\n");
        
        printf("\nEnter the character : ");
        scanf(" %c", &char1);

        printf("\nEnter the first number : ");
        scanf(" %d", &num1);
        printf("\nEnter the second number : ");
        scanf(" %d", &num2);

        switch (char1){
        case 'a':
            printf(" %d && %d is %d", num1, num2, num1 && num2);
            break;
        case 'b':
            printf(" %d || %d is %d", num1, num2, num1 || num2);
            break;
        case 'c':
            printf("!%d and !%d is %d and %d.", num1, num2, !num1, !num2);
            break;
        }
        break;

    case 4 :
        printf("\n\nChoose any option :\n");
        printf("a. ==\n");
        printf("b. !=\n");
        printf("c. >\n");
        printf("d. <\n");
        printf("e. <=\n");
        printf("f. >=\n");

        printf("\nEnter the character : ");
        scanf(" %c", &char1);

        printf("\nEnter the first number : ");
        scanf(" %d", &num1);
        printf("\nEnter the second number : ");
        scanf(" %d", &num2);

        switch (char1){
        case 'a':
            if(num1 == num2)
                printf("Yes, %d == %d", num1, num2);
            break;
        case 'b':
            if(num1 != num2)
                printf("Yes, %d != %d", num1, num2);
            break;
        case 'c':
            if(num1 > num2)
                printf("Yes, %d > %d", num1, num2);
            break;
        case 'd':
            if(num1 < num2)
                printf("Yes, %d < %d", num1, num2);
            break;
        case 'e':
            if(num1 <= num2)
                printf("Yes, %d <= %d", num1, num2);
            break;
        case 'f':
            if(num1 >= num2)
                printf("Yes, %d >= %d", num1, num2);
            break;
        }
        break;

    case 5 :
        printf("\n\nChoose any option :\n");
        printf("a. &\n");
        printf("b. |\n");
        printf("c. ^\n");
        printf("d. ~\n");
        printf("e. <<\n");
        printf("f. >>\n");
        printf("\nEnter the character : ");
        scanf(" %c", &char1);
        printf("\nEnter the first number : ");
        scanf(" %d", &num1);
        printf("\nEnter the second number : ");
        scanf(" %d", &num2);
        switch (char1){
        case 'a':
            printf(" %d & %d is %d", num1, num2, num1 & num2);
            break;
        case 'b':
            printf(" %d | %d is %d", num1, num2, num1 | num2);
            break;
        case 'c':
            printf(" %d ^ %d is %d", num1, num2, num1 ^ num2);
            break;
        case 'd':
            printf(" ~%d and ~%d is %d and %d", num1, num2, ~num1, ~num2);
            break;
        case 'e':
            printf(" %d << %d is %d", num1, num2, num1 << num2);
            break;
        case 'f':
            printf(" %d >> %d is %d", num1, num2, num1 >> num2);
            break;
        }
        break;

    default :
        printf("You have entered a wrong number.");
        break;

    }
    getch(); 
    return 0;
}