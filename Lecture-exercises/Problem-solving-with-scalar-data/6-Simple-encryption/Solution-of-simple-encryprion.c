//
// Created by Lenovo on 5/2/2024.
//

#include "Solution-of-simple-encryprion.h"


#include <stdio.h>
#define MAXR 30
int main(void) {
    char ch, namefile[MAXR+1];
    FILE *fpin, *fpout;
    printf("name of input file: ");
    scanf("%s", namefile);
    fpin = fopen(namefile, "r");
    printf("name of output file: ");
    scanf("%s", namefile);
    fpout = fopen(namefile, "w");
    while (fscanf(fpin, "%c", &ch) == 1) {
        if (ch>= '0' && ch<= '9')
            ch = '0' +('9' -ch);
        else if (ch>= 'a' && ch<= 'z')
            ch = 'A' +('z' -ch);
        else if (ch>= 'A' && ch<= 'Z')
            ch = 'a' +('Z' -ch);
        fprintf(fpout, "%c",ch);
    }
    fclose(fpin); fclose(fpout);

    return 0;
}