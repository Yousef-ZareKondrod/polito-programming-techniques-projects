//
// Created by Lenovo on 5/5/2024.
//
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void seek(char arr[]);

void modify(char arr[]);

void print(char arr[]);

void menuWord (void){
    const int MAXL=51;
    char command[MAXL], row[MAXL];
    int i, toContinue=1;
    while (toContinue) {
        printf("command (seek/mod/pr/end): ");
        scanf("%s", command); /* command */
        for (i=0; i<strlen(command); i++)
            command[i] = toupper(command[i]);
        gets(row); /* rest of the line */
        if (strcmp(command, "SEEK")==0) {
            seek(row);
        } else if (strcmp(command, "MOD")==0) {
            modify(row);
        } else if (strcmp(command, "PR")==0) {
            print(row);
        } else if (strcmp(command, "END")==0) {
            toContinue =0;
        } else {
            printf("non valid command\n");
        }
    }
}

void print(char arr[]) {
    printf("inside print\n");
    printf(arr);
    printf("\n");

}

void modify(char arr[]) {
    printf("inside modify\n");
    printf(arr);
    printf("\n");

}

void seek(char arr[]) {
    printf("inside seek\n");
    printf(arr);
    printf("\n");
}

int main(void){
    menuWord();
    return 0;
}