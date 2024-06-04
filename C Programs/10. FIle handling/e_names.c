#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct word{
    char wd[20];
};
int main()
{
    int i, j, count;
    char temp[20];
    struct word name[40];
    FILE *fptr = NULL;

    printf("Enter Any Key to Start\n");
    getchar();
    fptr = fopen("NAMES.txt", "r");


    if(fptr == NULL)
        printf("File cannot be opened.");
    else{
        count = 0;
        while(count < 40){
            fscanf(fptr, "%s", &temp);
            if (strcmp(temp , "ZZZZZZ") == 0)
                break;
            strcpy(name[count].wd, temp);
            count++;
        }

        for (i = 0; i < count - 1; i++){
            for (j = i + 1; j < count; j++){
                if(name[i].wd[0] > name[j].wd[0]){
                    strcpy(temp , name[i].wd);
                    strcpy(name[i].wd , name[j].wd);
                    strcpy(name[j].wd , temp);
                }

                else if(name[i].wd[0] == name[j].wd[0]){
                    if(name[i].wd[1] > name[j].wd[1]){
                        strcpy(temp , name[i].wd);
                        strcpy(name[i].wd , name[j].wd);
                        strcpy(name[j].wd , temp);
                    }

                    else if(name[i].wd[1] == name[j].wd[1]){
                        if(name[i].wd[2] > name[j].wd[2]){
                            strcpy(temp , name[i].wd);
                            strcpy(name[i].wd , name[j].wd);
                            strcpy(name[j].wd , temp);
                        }

                        else if(name[i].wd[2] == name[j].wd[2]){
                            if(name[i].wd[3] > name[j].wd[3]){
                                strcpy(temp , name[i].wd);
                                strcpy(name[i].wd , name[j].wd);
                                strcpy(name[j].wd , temp);
                            }

                            else if(name[i].wd[3] == name[j].wd[3]){
                                if(name[i].wd[4] > name[j].wd[4]){
                                    strcpy(temp , name[i].wd);
                                    strcpy(name[i].wd , name[j].wd);
                                    strcpy(name[j].wd , temp);
                                }
                            }
                        } 
                    }
                }
            }
        }
        printf("Total Number of words in the list is %d.\n" , count);
        printf("The Alphabetical Listing of words is :\n");
        for(i=0; i<count; i++)
            printf("%s\n", name[i].wd);
    }
    fclose(fptr);

    getch();
    return 0;
}