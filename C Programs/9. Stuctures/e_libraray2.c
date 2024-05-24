#include <stdio.h>
#include <conio.h>
#include <string.h>

struct book
{
    int accNo;
    char title[20];
    char authorName[10];
    int price;
    int flag;
};


int main()
{
    int num, i;

    printf("Enter the number of different books :");
    scanf("%d", &num);

    struct book book[num];

    for (i = 0; i < num; i++)
    {
        printf("Enter the Accession No. of book %d or 0(for termination) :\n", i + 1);
        scanf("%d", &book[i].accNo);
        if (book[i].accNo == 0){
            for(i=i; i<num; i++)
                book[i].accNo = 0;
            break;
        }
        else{
            printf("Enter the title of book %d :\n", i + 1);
            scanf("%s", &book[i].title);
            printf("Enter the Name of Author of book %d :\n", i + 1);
            scanf("%s", &book[i].authorName);
            printf("Enter the Price of book %d :\n", i + 1);
            scanf("%d", &book[i].price);
            printf("Enter the number of book available %d :\n", i + 1);
            scanf("%d", &book[i].flag);
        }
    }
    for (i = 0; i < num; i++){
            printf("The Accession No. of book is %d\n", book[i].accNo);
            printf("The Title of book is %s\n", book[i].title);
            printf("The Name of Author of book is %s\n", book[i].authorName);
            printf("The Price of book  is %d\n", book[i].price);
            printf("The number of book available is %d\n", book[i].flag);
        }
    getch();
    return 0;
}