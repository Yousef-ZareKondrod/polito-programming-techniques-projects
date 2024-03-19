//
// Created by Lenovo on 3/14/2024.
//
#include <stdio.h>


int use_of_scanf();

int use_of_fscanf();

int effect_of_spaces();

int use_of_printf();

int use_of_fprintf();


int use_of_scanf() {
    // Example: use of scanf
    int n;
    scanf("%d", &n); // reads int from stdin (keyboard)
    return 0;
}

int use_of_fscanf() {
// Example: use of fscanf.
    FILE *fp;
    int n;
    fp = fopen("myfile.txt", "r");
    fscanf(fp, "%d", &n);
    return 0;
}

int effect_of_spaces() {
// Example: effect of spaces.
    char str1[50], str2[50];
    FILE *fp;
    fp = fopen("people.txt", "r");
    fscanf(fp, "%s", str1); // reads until first space
    rewind(fp); // resets fp to go back to beginning of file
    fgets(str2, 50, fp); // reads whole line
    return 0;

}

int use_of_printf() {
    // Example: use of printf
    int n = 5;
    printf("%d", n); // prints int to stdout (video)
    return 0;
}

int use_of_fprintf() {
// Example: use of fprintf
    FILE *fp;
    int n = 5;
    fp = fopen("myfile.txt", "w");
    fprintf(fp, "%d", n); // prints int to file
    return 0;
}


int formatted_input_output_example_function() {
    use_of_scanf();

    use_of_fscanf();

    effect_of_spaces();

    use_of_printf();

    use_of_fprintf();
    return 0;

}