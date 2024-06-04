#include<stdio.h>
#include<conio.h>
int main()
{
    int num, i, j;
    char ch;
    FILE *fptr;

    printf("Enter the number of students : ");
    scanf("%d", &num);

    struct students{
        int sn;
        char name[20];
    } student[num];

    printf("Enter the Students Name :\n");
    for(i=0; i<num; i++){
        student[i].sn = i + 1;
        scanf("%s", &student[i].name);
    }

    fptr = fopen("Student.txt", "w");
    for(i=0; i<num; i++)
        fprintf(fptr, "%d %s\n", student[i].sn, student[i].name);
    fclose(fptr);

    j = 0;
    while(j < 3){
        printf("\n\n 1. Display the nth name.\n");
        printf(" 2. Display all names starting with a letter.\n");
        printf(" 3. Exit.\n");
        printf("Enter Your Choice :");
        scanf("%d", &j);

        if (j == 1){
            printf("Enter the n :");
            scanf("%d", &i);
            printf("The Student name at %d is %s.", i, student[i-1].name);
        }

        else if (j == 2){
            printf("Enter the letter :");
            scanf(" %c", &ch);
            printf("The Student name starting with %c :\n", ch);
            for(i=0; i<num; i++){
                if(student[i].name[0] == ch)
                    printf("%s\n", student[i].name);
            }
        }
    }
    getch();
    return 0;
}