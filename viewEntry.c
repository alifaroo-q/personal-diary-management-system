#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void viewEntry() {

    system("cls");
    printf("\n \n \n \n \n");
    printf("\t \t ************************************************************************** \n \n");
    printf("\t \t ******************** Personal Diary Managements System ******************* \n");
    printf("\n \t \t ************************************************************************** \n");
    printf("\n \n \n \n \n");

    printf("\t \t What Do You Want To View: \n \n");

    printf("\t \t Appointment \t \t [1] \n");
    printf("\t \t Note \t \t \t [2] \n \n");
    printf("\t \t Go Back \t \t [0] \n");

    int choice;
    printf("\n \n \t \t Select What You Want To Do: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            viewAppointment();
            break;
        case 2:
            viewNote();
            break;
        case 0:
            main();
            break;
        default:
            printf("\n \n \t \t PLEASE SELECT EITHER [1] OR [2] OR [0] \n \n \n");
    }

}
