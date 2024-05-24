#include <stdio.h>
#include <conio.h>
struct class
{
   int room;
   int floor;
   int class;
};

int main()
{
    struct class *classPtr, class1;
    classPtr = &class1;   

    printf("Enter Room No.: ");
    scanf("%d", &class1.room);
    //classptr->room = class1.room

    printf("Enter Floor No.: ");
    scanf("%d", &classPtr->floor);

    printf("Enter Class.: ");
    scanf("%d", &classPtr->class);

    printf("\nDisplaying:\n");
    printf("Class : %d\n", classPtr->class);
    printf("Room No.: %d\n", classPtr->room);
    printf("Floor No.: %d", (*classPtr).floor); 
    //(*classPtr).floor = classPtr->floor
    // -> is used to dereference.

    getch(); 
    return 0;
}