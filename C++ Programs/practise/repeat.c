#include<stdio.h>
#include<string.h>
int main(void)
{
    int i, count = 1, temp = 1;
    char str[100];
    printf("Enter the String : ");
    scanf("%s", &str);
    for(i=0; i<strlen(str); i++){
        if (str[i] == str[i+1]){
            count ++;
        }
        else if (str[i] != str[i+1]){
            if(temp < count)
                temp = count;
            count = 1;
        }
    }
    printf("%d", temp);
    return 0;
}