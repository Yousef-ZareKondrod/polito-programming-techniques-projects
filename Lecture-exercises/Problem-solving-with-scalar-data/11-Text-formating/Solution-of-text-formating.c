//
// Created by Lenovo on 5/9/2024.
//
#include "stdio.h"
#include "string.h"

void formatting(char nin[], char nout[], int lmax) {
    const int STRLEN = 21;
    FILE *fin = fopen(nin, "r");
    FILE *fout = fopen(nout, "w");
    char word[STRLEN];
    int l;

    l = 0;
    while (fscanf(fin, "%s", word) == 1) {
        if (l + 1 + strlen(word) > lmax) {
            fprintf(fout, "\n%s", word);
            l = strlen(word);
        } else {
                fprintf(fout, "%s%s", l==0? "":" ",word);
                l += 1 + strlen(word);

        }
    }
    fclose(fin), fclose(fout);
}


int main(void) {
    char inputFileName[] = "../Lecture-exercises/Problem-solving-with-scalar-data/11-Text-formating/input.txt";
    char outputFileName[] = "output.txt";
    int maxLength = 30;

    formatting(inputFileName, outputFileName, maxLength);

    return 0;
}