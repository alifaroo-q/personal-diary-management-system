#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "header.h"


void note() {


    char firstName[20];
    char lastName[20];
    char note[500];
    char choice;
    FILE * fp;

    // time function data_type
    time_t t;
    time(&t);

    do {

        system("cls");

        printf("\n \n \n \n \n");
        printf("\t \t ************************************************************************** \n \n");
        printf("\t \t ******************** Personal Diary Managements System ******************* \n");
        printf("\n \t \t ************************************************************************** \n \n");
        printf("\t \t **************************** Note Taking Section ************************* \n");
        printf("\n \n \n \n \n");

        printf("\n \t \t enter your first and last name: ");
        scanf("%s %s", firstName, lastName);

        printf("\n \t \t type your note: ");
        scanf(" %[^\n]s", note);


        fp = fopen("note.txt", "r");

        if (fp == NULL) {

            fp = fopen("note.txt", "wb+");

            fprintf(fp,
                    "\n \n \t \t ************************************************************************** \n \n"
                    "\t \t ******************** Personal Diary Managements System ******************* \n"
                    "\n \t \t ************************************************************************** \n"
                    "\t \t **************************** Note Taking Section ************************* \n"
                    "\n \n \n%s \n \t \t The first name is: %s \n \t \t The last name is: %s"
                    "\n \t \t Your note is: %s", ctime(&t), firstName, lastName, note
            );

        } else {

            fp = fopen("note.txt", "a");

            fprintf(fp,
                    "\n \n \n%s \n \t \t The first name is: %s \n \t \t The last name is: %s"
                    "\n \t \t Your note is: %s", ctime(&t), firstName, lastName, note
            );

        }

        /* close the file*/
        fclose(fp);

        printf("\n \t \t Do you want to add another entry [Y for Yes]: ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    main();

}