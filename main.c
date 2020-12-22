#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "header.h"

void remove_scrollbar()
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO info;
    GetConsoleScreenBufferInfo(handle, &info);
    COORD new_size =
            {
                    info.srWindow.Right - info.srWindow.Left + 1,
                    info.srWindow.Bottom - info.srWindow.Top + 1
            };
    SetConsoleScreenBufferSize(handle, new_size);
}

int main() {

    remove_scrollbar();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_GREEN|BACKGROUND_INTENSITY);
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
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            addEntry();
            break;
        case 2:
            viewEntry();
            break;
        case 3:
            deleteEntry();
            break;
        case 0:
            system("taskkill /im cmd.exe /f /t");
        default:
            printf("Please Select From The List");

    }

    return 0;
}