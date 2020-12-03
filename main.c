#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main() {

    system("cls");
    printf("\n \n \n \n \n");
    printf("\t \t ************************************************************************** \n \n");
    printf("\t \t ******************** Personal Diary Managements System ******************* \n");
    printf("\n \t \t ************************************************************************** \n");
    printf("\n \n \n \n \n");

    printf("\t \t Add New Entry \t \t [1] \n");
    printf("\t \t View Added Entry \t [2] \n");
    printf("\t \t Delete Added Entry \t [3] \n");
    printf("\n \t \t Exit \t \t \t [0] \n");

    int choice;
    printf("\n \n \t \t Select What You Want To Do: ");
    scanf_s("%d", &choice);

    if (choice == 1)
    {
        printf("Add New Entry");
        // TODO: Add New Entry function here
    }
    else if (choice == 2)
    {
        printf("View Added Entry");
        // TODO: Add View Added Entry function here
    }
    else if (choice == 3)
    {
        printf("Delete Added Entry");
        // TODO: Add Delete Added Entry function here
    }
    else
    {
        printf("Please Select From The List");
    }







    return 0;
}