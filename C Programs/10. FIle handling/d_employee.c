#include <stdio.h>
#include <conio.h>
#include <string.h>

struct employee
{
    int emplno;
    char name[20];
    char sex[3];
    int sal;
};

int main(){
    int num, i, no, flag;
    FILE *fptr, *fptr2;

    printf("Enter the total strength of your company :");
    scanf("%d", &num);

    struct employee empl[num];

    fptr = fopen("employeetemp.txt", "w");
    fptr2 = fopen("employee.txt", "w");
    for (i = 0; i < num; i++)
    {
        printf("Enter the Employee Number or 0 for termination :\n");
        scanf("%d", &empl[i].emplno);
        if (empl[i].emplno == 0) 
            break;
        else{
            fprintf(fptr, "%d\n",  empl[i].emplno);
            fprintf(fptr2, "\nEmployee No. : %d\n",  empl[i].emplno);
            printf("Enter the Name of employee  :\n");
            scanf("%s", &empl[i].name);
            fprintf(fptr, "%s\n",  empl[i].name);
            fprintf(fptr2, "Name : %s\n",  empl[i].name);
            printf("Enter the Sex of employee (M/F)  :\n");
            scanf("%s", &empl[i].sex);
            fprintf(fptr, "%s\n",  empl[i].sex);
            fprintf(fptr2, "Sex : %s\n", empl[i].sex);
            printf("Enter the Gross Salary of employee  :\n");
            scanf("%d", &empl[i].sal);
            fprintf(fptr, "%d\n",  empl[i].sal);
            fprintf(fptr2, "Salary : %d\n", empl[i].sal);
        }
    }
    fclose(fptr);
    fclose(fptr2);

    flag = 0;
    while (flag < 4)
    {
        printf("\n\n 1. Add a employee data.\n");
        printf(" 2. Remove a employee data.\n");
        printf(" 3. Change salary of a employee.\n");
        printf(" 4. Exit.\n");
        printf("Enter Your Choice :");
        scanf("%d", &flag);
    
        if (flag == 1){
            printf("Enter the Employee Number :\n");
            scanf("%d", &no);
            for(i=0; i<num; i++){
                if(empl[i].emplno == no)
                    break;
            }
            if(i != num)
                printf("This number is already assigned to %s.", empl[i].name); 
            else{
                empl[no].emplno = no;
                printf("Enter the Name of employee  :\n");
                scanf("%s", &empl[no].name);
                printf("Enter the Sex of employee (M/F) :\n");
                scanf("%s", &empl[no].sex);
                printf("Enter the Gross Salary of employee  :\n");
                scanf("%d", &empl[no].sal);

                fptr = fopen("employeetemp.txt", "a");
                fptr2 = fopen("employee.txt", "a");
                fprintf(fptr2, "\nEmployee No. : %d\n",  empl[no].emplno);
                fprintf(fptr, "%d\n",  empl[no].emplno);
                fprintf(fptr2, "Name : %s\n",  empl[no].name);
                fprintf(fptr, "%s\n",  empl[no].name);
                fprintf(fptr2, "Sex : %s\n", empl[no].sex);
                fprintf(fptr, "%s\n", empl[no].sex);
                fprintf(fptr2, "Salary : %d\n", empl[no].sal);
                fprintf(fptr, "%d\n", empl[no].sal);
                fclose(fptr);
                fclose(fptr2);
            }
        }

         else if (flag == 2){
            printf("Enter the Employee Number :\n");
            scanf("%d", &no);
            for(i=0; i<num; i++){
                if(empl[i].emplno == no)
                      break;
            }
            if(i == num)
                printf("The Employee No. %d does not exist.", no); 
            else{
                fptr = fopen("employeetemp.txt", "w");
                fptr2 = fopen("employee.txt", "w");
                for(i=0; i<num; i++)
                {
                    if (empl[i].emplno != no){
                        if (empl[i].sex[0] == 'M' || empl[i].sex[0] == 'm' || empl[i].sex[0] == 'F' || empl[i].sex[0] == 'f'){
                            fprintf(fptr2, "\nEmployee No. : %d\n",  empl[i].emplno);
                            fprintf(fptr, "%d\n",  empl[i].emplno);
                            fprintf(fptr2, "Name : %s\n",  empl[i].name);
                            fprintf(fptr, "%s\n",  empl[i].name);
                            fprintf(fptr2, "Sex : %s\n", empl[i].sex);
                            fprintf(fptr, "%s\n", empl[i].sex);
                            fprintf(fptr2, "Salary : %d\n", empl[i].sal);
                            fprintf(fptr, "%d\n", empl[i].sal);
                        }
                    }
                }
                fclose(fptr);
                fclose(fptr2);
            }
        }

            
        else if (flag == 3){
            printf("Enter the Employee Number :\n");
            scanf("%d", &no);
            for(i=0; i<num; i++){
                if(empl[i].emplno == no)
                      break;
            }
            if(i == num)
                printf("The Employee No. %d does not exist.", no); 
            else{
                printf("Enter the New Gross Salary of employee %d :\n", empl[i].emplno);
                scanf("%d", &empl[i].sal);
                fptr = fopen("employeetemp.txt", "w");
                fptr2 = fopen("employee.txt", "w");
                for(i=0; i<num; i++)
                {
                    if (empl[i].sex[0] == 'M' || empl[i].sex[0] == 'm' || empl[i].sex[0] == 'F' || empl[i].sex[0] == 'f'){
                        fprintf(fptr2, "\nEmployee No. : %d\n",  empl[i].emplno);
                        fprintf(fptr, "%d\n",  empl[i].emplno);
                        fprintf(fptr2, "Name : %s\n",  empl[i].name);
                        fprintf(fptr, "%s\n",  empl[i].name);
                        fprintf(fptr2, "Sex : %s\n", empl[i].sex);
                        fprintf(fptr, "%s\n", empl[i].sex);
                        fprintf(fptr2, "Salary : %d\n", empl[i].sal);
                        fprintf(fptr, "%d\n", empl[i].sal);
                    }
                }
                
                fclose(fptr);
                fclose(fptr2);
            }
        }
            
    }
    getch();
    return 0;
}