//
// Created by Lenovo on 5/5/2024.
//
#include <stdio.h>
#include <string.h>
#include <ctype.h>


#include "Solution-of-menu-with-characters-as-selctors.h"
void menuCharacters (void) {
    const int MAXL=51;
    char row[MAXL];
    int i, toContinue=1;
    while (toContinue) {
        printf("command (A/L/T, E=exit): ");
        char sel;
        scanf(" %c", &sel);
        gets(row); /* rest of the line */switch (toupper(sel)) {
            case 'A' : fA(row); break;
            case 'L' : fL(row); break;
            case 'T' : fT(row); break;
            case 'E' : toContinue=0; break;
            default: printf("non-valid command\n");
        }
    }
}

int fA(){
    printf("inside fA\n");
}
int fL(){
    printf("inside fL\n");
}
int fT(){
    printf("inside fT\n");
}
int main(){
    menuCharacters();
    return 0;
}