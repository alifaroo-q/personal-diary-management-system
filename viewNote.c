#include <stdio.h>
#include <stdlib.h>

void viewNote(){

    char c;
    FILE * fp;

    fp = fopen("note.txt", "r");

    system("cls");

    if (fp == NULL) {
        printf("\nNo note entries exist");
    }

    c = fgetc(fp);
    while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(fp);
    }
    printf("\n");

}