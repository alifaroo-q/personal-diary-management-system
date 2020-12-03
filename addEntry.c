#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void addEntry() {

    system("cls");
    printf("\n \n \n \n \n");
    printf("\t \t ************************************************************************** \n \n");
    printf("\t \t ******************** Personal Diary Managements System ******************* \n");
    printf("\n \t \t ************************************************************************** \n");
    printf("\n \n \n \n \n");

    printf("\t \t What Do You Want To Add: \n \n");

    printf("\t \t Appointment \t \t [1] \n");
    printf("\t \t Note \t \t \t [2] \n");

    int choice;
    printf("\n \n \t \t Select What You Want To Do: ");
    scanf_s("%d", &choice);

    if (choice == 1)
    {
        appointment();
    }
    else if (choice == 2)
    {
        note();
    }
    else
    {
        printf("\n \n \t \t PLEASE SELECT EITHER [1] OR [2] \n \n \n");
    }

}
