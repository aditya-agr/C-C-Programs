#include<stdio.h>
#include<conio.h>
#include<string.h>

struct date{
    int d, m ,y;
};

struct employee{
    int empcode;
    char empname[20];
    struct date join_date;
    float salary;
};

int main()
{
    int num, i, j;
    FILE *fptr;

    printf("Enter the number of employees :");
    scanf("%d", &num);

    struct employee empl[num];

    fptr = fopen("recordtemp.txt", "w");

    for (i = 0; i < num; i++)
    {
        printf("Enter the Employee code of employee %d\n", i + 1);
        scanf("%d", &empl[i].empcode);
        fprintf(fptr, "%d\n", empl[i].empcode);
        printf("Enter the Name of employee %d :\n", i + 1);
        scanf("%s", &empl[i].empname);
        fprintf(fptr, "%s\n", empl[i].empname);
        printf("Enter the Date of Joining of employee %d (DD/MM/YYYY) :\n", i + 1);
        printf("Day :");
        scanf("%d", &empl[i].join_date.d);
        fprintf(fptr, "%d\n", empl[i].join_date.d);
        printf("Month :");
        scanf("%d", &empl[i].join_date.m);
        fprintf(fptr, "%d\n", empl[i].join_date.m);
        printf("Year :");
        scanf("%d", &empl[i].join_date.y);
        fprintf(fptr, "%d\n", empl[i].join_date.y);
        printf("Enter the Salary of employee %d\n", i + 1);
        scanf("%f", &empl[i].salary);
        fprintf(fptr, "%f\n", empl[i].salary);
    }
    fclose(fptr);

    struct employee temp;

    for (i = 0; i < num - 1; i++){
        for (j = i + 1; j < num; j++){
            if(empl[i].join_date.y > empl[j].join_date.y){
                temp = empl[i];
                empl[i] = empl[j];
                empl[j] = temp;
            }
            else if(empl[i].join_date.y == empl[j].join_date.y){
                if(empl[i].join_date.m > empl[j].join_date.m){
                    temp = empl[i];
                    empl[i] = empl[j];
                    empl[j] = temp;
                }
                else if(empl[i].join_date.m == empl[j].join_date.m){
                    if(empl[i].join_date.d > empl[j].join_date.d){
                        temp = empl[i];
                        empl[i] = empl[j];
                        empl[j] = temp;
                    }
                }
            }
        }
    }

    fptr = fopen("record.txt", "w");
    for (i = 0; i < num; i++)
    {
        fprintf(fptr, "\n\nEmployee Number %d \n", i+1);
        fprintf(fptr, "The Employee code : %d\n",  empl[i].empcode);
        fprintf(fptr, "The Name : %s\n",  empl[i].empname);
        fprintf(fptr, "The Joining Date : %d/%d/%d\n", empl[i].join_date.d, empl[i].join_date.m, empl[i].join_date.y);
        fprintf(fptr, "The Salary : %f\n", empl[i].salary);
    }
    fclose(fptr);

    getch();
    return 0;
}