#include <stdio.h>
#include <stdlib.h>

void viewNote(){

    char c;
    FILE * fp;

    fp = fopen("note.txt", "r");

    if (fp == NULL) {
        printf("\t \t \t No note entries exist");
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