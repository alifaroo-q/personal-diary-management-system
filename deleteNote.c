#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void deleteNote (){

    int choice;
    FILE * fp;

    system("cls");

    printf("\n \n \n \n \n");
    printf("\t \t ************************************************************************** \n \n");
    printf("\t \t ******************** Personal Diary Managements System ******************* \n");
    printf("\n \t \t ************************************************************************** \n");
    printf("\t \t *************************** Note Delete Section ************************** \n");
    printf("\n \n \n \n \n");


    printf("\t \t Do you really want to delete notes: \n\n");
    printf("\t \t Yes delete the notes \t \t [1]\n");
    printf("\t \t No do not delete the notes \t [2]\n\n");
    printf("\n\t\t What do you want: ");
    scanf(" %d", &choice);


    fp = fopen("note.txt", "r");

    if (fp == NULL){
        printf("\t \t The File does not exits\n");
        fclose(fp);
    }
    else {
        switch (choice) {
            case 1:
                fclose(fp);
                remove("note.txt");
                main();
            case 2:
                main();
                break;
            default:
                printf("Select the correct option");

        }
    }






}