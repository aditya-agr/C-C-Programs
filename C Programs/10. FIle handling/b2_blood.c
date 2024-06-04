#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct blood_donor{
    char bldname[20];
    char bldadd[40];
    int age;
    int bldgrp;
};
int main()
{
    int num, i;
    FILE *fptr = NULL;

    printf("Enter the number of Blood donors :");
    scanf("%d", &num);

    struct blood_donor blood[num];

    fptr = fopen("bloodtemp.txt","w");

    for (i = 0; i < num; i++)
    {
        printf("Enter the Name of Blood donor %d :\n", i + 1);
        scanf("%s", &blood[i].bldname);
        getchar();
        fprintf(fptr, "%s\n",  blood[i].bldname);
        printf("Enter the Address of Blood donor %d :\n", i + 1);
        gets(blood[i].bldadd);
        fprintf(fptr, "%s\n",  blood[i].bldadd);
        printf("Enter the Age of Blood donor %d\n", i + 1);
        scanf("%d", &blood[i].age);
        fprintf(fptr, "%d\n",  blood[i].age);
        printf("Enter the Blood group of Blood donor %d\n", i + 1);
        scanf("%d", &blood[i].bldgrp);
        fprintf(fptr, "%d\n",  blood[i].bldgrp);
    }
    fclose(fptr);

   
    fptr = fopen("blood_donor.txt", "w");
    for (i = 0; i < num; i++)
    {
        fprintf(fptr, "\nBlodd Donor Number %d\n", i+1);
        fprintf(fptr, "Name : %s\n",  blood[i].bldname);
        fprintf(fptr, "Address : %s\n",  blood[i].bldadd);
        fprintf(fptr, "Age : %d\n",  blood[i].age);
        fprintf(fptr, "Blood Group : %d\n",  blood[i].bldgrp);
    }

    fclose(fptr);

    fptr = fopen("bloodtemp.txt", "r");
    if(fptr == NULL)
        printf("File cannnot be opened.");
    else{
        for (i = 0; i < num; i++){

            fgets(blood[i].bldname, 20, fptr);
            fgets(blood[i].bldadd, 50, fptr);
            fscanf(fptr, "%d", &blood[i].age);
            fscanf(fptr, "%d\n", &blood[i].bldgrp);
        
        }
        for (i = 0; i < num; i++)
        {
            printf("\nBlood donor Number %d\n", i+1);
            printf("Name : %s\n",  blood[i].bldname);
            printf("Address : %s\n",  blood[i].bldadd);
            printf("Age : %d\n",  blood[i].age);
            printf("Blood Group : %d\n",  blood[i].bldgrp);
            
        }


        printf("The Names of Blood Donors whose age is below 25 and blood group type is Type 2 :\n");
        for(i=0; i<num; i++)
        {
            if(blood[i].age < 25 && blood[i].bldgrp == 2)
                printf("%s", blood[i].bldname);
        }
        fclose(fptr);
        }

    getch();
    return 0;
}