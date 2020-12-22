#include <stdio.h>
#include <stdlib.h>

void viewAppointment(){

    char c;
    FILE * fp;

    fp = fopen("appointment.txt", "r");

    if (fp == NULL) {
        printf("\t \t \t No appointment entries exist");
    }

    system("cls");

    c = fgetc(fp);
    while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(fp);
    }
    printf("\n");

}