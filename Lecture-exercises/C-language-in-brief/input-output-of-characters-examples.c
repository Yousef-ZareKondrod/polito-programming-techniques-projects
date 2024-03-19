//
// Created by Lenovo on 3/14/2024.
//
#include <stdio.h>

int related_to_read_ch();

int related_to_write_ch();


int related_to_read_ch() {
// Examples: getc, fgetc, getchar
    char a, b, c;
    FILE *fp;
    fp = fopen("myfile.txt", "r");

    // reads one character from file pointed by fp
    a = getc(fp);

    // reads one character from file pointed by fp
    b = fgetc(fp);

    // reads one character from keyboard (stdin)

    c = getchar();

    // reads one character from keyboard (stdin)
    c = getc(stdin);


    fclose(fp);
    return 0;
}

int related_to_write_ch() {
// Examples: putc, fputc, putchar
    char a = 'x', b = 'y', c = 'z';
    FILE *fp;
    fp = fopen("myfile.txt", "w");
    // writes one character on file pointed by fp
    putc(a, fp);
    // writes one character on file pointed by fp
    fputc(b, fp);
    // writes one character on video (stdout)

    putchar(c);

    // writes one character on video (stdout)

    putc(c, stdout);


    fclose(fp);
    return 0;
}


int input_output_of_characters_example_function() {
    related_to_write_ch();
    related_to_read_ch();


    return 0;
}