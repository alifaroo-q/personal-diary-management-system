#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "header.h"

void appointment() {

    char firstName[20];
    char lastName[20];
    char place[20];
    char priority;
    int priority_choice;
    char choice;

    // time function data_type
    time_t t;
    time(&t);

    // file pointer
    FILE * fp;

    do {

    // formation design
    system("cls");

    printf("\n \n \n \n \n");
    printf("\t \t ************************************************************************** \n \n");
    printf("\t \t ******************** Personal Diary Managements System ******************* \n");
    printf("\n \t \t ************************************************************************** \n");
    printf("\t \t **************************** Appointment Section ************************* \n");
    printf("\n \n \n \n \n");


        printf("\n \t \t appointment party first and last name:");
        scanf("%s %s", firstName, lastName);

        printf("\n \t \t place of meeting:");
        scanf("%s", &place[0]);

        printf("\n \t \t priority of meeting [1] high [2] medium [3] low :");
        scanf("%d", &priority_choice);

        if (priority_choice == 1)
            priority = 'H';
        else if (priority_choice == 2)
            priority = 'M';
        else if (priority_choice == 3)
            priority = 'L';
        else
            priority = 'l';


        fp = fopen("appointment.txt", "r");

        if (fp == NULL) {

            fp = fopen("appointment.txt", "wb+");

            fprintf(fp,
                    "\n \n \t \t ************************************************************************** \n \n"
                    "\t \t ******************** Personal Diary Managements System ******************* \n"
                    "\n \t \t ************************************************************************** \n"
                    "\t \t **************************** Appointment Section ************************* \n"
                    "\n%s \n \t \t The first name is: %s \n \t \t The last name is: %s"
                    "\n \t \t The place of meeting is: %s"
                    "\n \t \t The priority of meeting is: %c", ctime(&t), firstName, lastName, place, priority
            );

        } else {

            fp = fopen("appointment.txt", "a");

            fprintf(fp,
                    "\n \n \n%s \n \t \t The first name is: %s \n \t \t The last name is: %s"
                    "\n \t \t The place of meeting is: %s"
                    "\n \t \t The priority of meeting is: %c", ctime(&t), firstName, lastName, place, priority
            );

        }

        /* close the file*/
        fclose(fp);

        printf("\n \t \tDo you want to add another entry [Y for Yes]: ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    main();

}