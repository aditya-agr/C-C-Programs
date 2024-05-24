#include <stdio.h>
#include <conio.h>
#include <string.h>

struct employee
{
    int code;
    char name[20];
    int day;
    int month;
    int year;
};

int main()
{
    int num, i, day, month, year, jday, jmonth, jyear, day_diff, month_diff, year_diff;

    printf("Enter the number of employees. ");
    scanf("%d", &num);

    struct employee empl[num];

    for (i = 0; i < num; i++)
    {
        printf("Enter the Employee code of employee %d\n", i + 1);
        scanf("%d", &empl[i].code);
        printf("Enter the Name of employee %d :\n", i + 1);
        scanf("%s", &empl[i].name);
        printf("Enter the Date of Joining of employee %d (DD/MM/YYYY) :\n", i + 1);
        printf("Day :");
        scanf("%d", &empl[i].day);
        printf("Month :");
        scanf("%d", &empl[i].month);
        printf("Year :");
        scanf("%d", &empl[i].year);
    }

    printf("Enter the current date :");
    printf("Day :");
    scanf("%d", &day);
    printf("Month :");
    scanf("%d", &month);
    printf("Year :");
    scanf("%d", &year);

    for(i=0; i<num; i++)
    {
        jday = empl[i].day;
        jmonth = empl[i].month;
        jyear = empl[i].year;

        if(day < jday){   
            if (month == 5 || month == 7 || month == 10 || month == 12)
                day += 30;
            else if( month == 3){
                if((year%400 == 0) || (year%4 == 0 && year%100 != 0))
                    day += 29;
                else
                    day += 28;
            }
            else
                day += 31;
            month --;
        }
        if (month < jmonth){
            month += 12;
            year --;
        }

        day_diff = day - jday;
        month_diff = month - jmonth;
        year_diff = year - jyear;

        if (year_diff >= 3){
            printf("\n\n The Employee with more than 3 years of service :");
            printf("Employee code : %d", empl[i].code);
            printf("Employee name : %s", empl[i].name);
            printf("Period of Service : %ddays %dmonths %dyears",  day_diff, month_diff, year_diff);
        }
    }
    getch();
    return 0;
}