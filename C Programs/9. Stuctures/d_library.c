#include <stdio.h>
#include <conio.h>
#include <string.h>

struct book
{
    int accNo;
    char title[20];
    char authorName[10];
    int price;
    int count;
};

void book_func1(struct book bk[], int n)
{
    int acc, i, a = 0;
    printf("Enter the Accession No. :");
    scanf("%d", &acc);
    for (i = 0; i < n; i++)
    {
        if (bk[i].accNo == acc)
           a = 1;
    }
    if(a == 1)
        printf("This accession number is already assigned.");
    else{
        printf("Enter the title of book :");
        scanf("%s", &bk[a].title);
        printf("Enter the Name of Author of book :");
        scanf("%s", &bk[a].authorName);
        printf("Enter the Price of book :");
        scanf("%d", &bk[a].price);
        printf("Enter the number of book available :");
        scanf("%d", &bk[a].count);
    }
}



void book_func2(struct book bk[], int n)
{
    int no, i;
    printf("Enter the Accession No. :");
    scanf("%d", &no);
    for (i = 0; i < n; i++)
    {
        if (bk[i].accNo == no)
            printf("The Accession No. of book is %d\n", bk[i].accNo);
            printf("The Title of book is %s\n", bk[i].title);
            printf("The Name of Author of book is %s\n", bk[i].authorName);
            printf("The Price of book  is %d\n", bk[i].price);
            printf("The number of book available is %d\n", bk[i].count);
    }
}

void book_func3(struct book bk[], int n)
{
    int  i;
    char au[20];
    printf("Enter the Name of Author :");
    scanf("%s", &au);
    printf("The Title of book of given Author Name :\n");
    for (i = 0; i < n; i++)
    {
        if (bk[i].authorName == au)
           printf("%s", bk[i].title);
    }
}

void book_func4(struct book bk[], int n)
{
    int acc, i;
    printf("Enter the Accession No. :");
    scanf("%d", &acc);
    printf("The Title of book of given Accession No :\n");
    for (i = 0; i < n; i++)
    {
        if (bk[i].accNo == acc)
           printf("%s", bk[i].title);
    }
}

void book_func5(struct book bk[], int n)
{
    int i, cnt=0, sum=0;
    for(i=0; bk[i].accNo != 0; i++){
        cnt++;
        sum = sum + bk[i].count;
    }
    printf("The number of different books available is %d.\n", cnt);
    printf("The number of total books available is %d.\n", sum);
}


void book_func6(struct book bk[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++){
        for (j = i + 1; j < n; j++){
            if(bk[i].accNo > bk[j].accNo){
                temp = bk[i].accNo;
                bk[i].accNo = bk[j].accNo;
                bk[j].accNo = temp;
            }
        }
    }
    for(i=0; i<n; i++){
        printf("The Accession No. of book %d is %d\n",  i+1, bk[i].accNo);
        printf("The Title of book %d is %s\n\n", i+1, bk[i].title);
    }
}

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
            scanf("%d", &book[i].count);
        }
    }
    i = 0;
    while (i < 7)
    {
        printf("\n\n\n\n  1. Add a book information.\n ");
        printf(" 2. Display book information.\n ");
        printf(" 3. List all books of given author.\n ");
        printf(" 4. List the title of specified book.\n ");
        printf(" 5. List the count of books in the library.\n ");
        printf(" 6. List the books in the order of accession number.\n ");
        printf(" 7. Exit\n");
        printf("Enter Your Choice :");
        scanf("%d", &i);

        if (i == 1)
            book_func1(book, num);
        else if (i == 2)
            book_func2(book, num);
        else if (i == 3)
            book_func3(book, num);
        else if (i == 4)
            book_func4(book, num);
        else if (i == 5)
            book_func5(book, num);
        else if (i == 6)
            book_func6(book, num);
    }

    getch();
    return 0;
}