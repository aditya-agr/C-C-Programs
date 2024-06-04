#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i = 0;
    char str[80];
    FILE *fptr = NULL;
    printf("Enter Any Key to Start\n");
    getchar();
    fptr = fopen("NOTES.txt", "r");

    if(fptr == NULL)
        printf("File cannot be opened.");
    else{
        while(fgets(str, 80, fptr) != NULL){
            puts(str);
            i++;
            if (i == 50){
                printf("****Now Change the Page****\n");
                printf("Press any key to continue.\n");
                fflush(stdin);
                getchar();
                i = 0;
                continue;
            }
        }
    }

    fclose(fptr);
    getch();
    return 0;
}