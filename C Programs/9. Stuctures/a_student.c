#include <stdio.h>
#include <conio.h>
#include <string.h>

struct student
{
    int rollNo;
    char name[20];
    char department[10];
    char course[10];
    int yoj;
};

void stu_year(struct student st[], int n)
{
    int year, i;
    printf("Enter the year :");
    scanf("%d", &year);
    for (i = 0; i < n; i++)
    {
        if (st[i].yoj == year)
            printf("%s\n", st[i].name);
    }
}

void stu_inform(struct student st[], int n)
{
    int roll, i;
    printf("Enter the roll No : ");
    scanf("%d", &roll);
    for (i = 0; i < n; i++)
    {
        if (st[i].rollNo == roll)
        {
            printf("The Roll no. of student is %d\n",  st[i].rollNo);
            printf("The Name of student  is %s\n",  st[i].name);
            printf("The Department of student is %s\n", st[i].department);
            printf("The Course of student is %s\n", st[i].course);
            printf("The Year of Joining of student is %d\n", st[i].yoj);
        }
    }
}

int main()
{
    int num, i;

    printf("Enter the number of students. ");
    scanf("%d", &num);

    struct student stu[num];

    for (i = 0; i < num; i++)
    {
        printf("Enter the Roll no. of student %d\n", i + 1);
        scanf("%d", &stu[i].rollNo);
        printf("Enter the Name of student %d :\n", i + 1);
        scanf("%s", &stu[i].name);
        printf("Enter the Depaartment of student %d :\n", i + 1);
        scanf("%s", &stu[i].department);
        printf("Enter the Course of student %d :\n", i + 1);
        scanf("%s", &stu[i].course);
        printf("Enter the Year of Joining of student %d :\n", i + 1);
        scanf("%d", &stu[i].yoj);
    }
    i = 0;
    while (i < 3)
    {
        printf("\n\n\n\n  1. Enter Year of Joining amd get student list.\n ");
        printf(" 2. Enter the roll no. to get information.\n ");
        printf(" 3. Exit\n");
        printf("Enter Your Choice :");
        scanf("%d", &i);

        if (i == 1)
            stu_year(stu, num);
        else if (i == 2)
            stu_inform(stu, num);
    }

    getch();
    return 0;
}