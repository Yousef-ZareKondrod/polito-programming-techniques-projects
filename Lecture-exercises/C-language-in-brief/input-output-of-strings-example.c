//
// Created by Lenovo on 3/14/2024.
//
#include <stdio.h>


int related_to_read_st();

int related_to_write_st();

int related_to_read_st(){
// Example of gets
    char mystring[50];
    // reads from keyboard (stdin) to mystring
    gets(mystring);
// Example of fgets
    char str[50];
    FILE *fp;
    fp=fopen("myfile.txt","r");
    // reads from file pointed by fp to str
    fgets(str,10,fp);
    fclose(fp);
    return 0;
}

int related_to_write_st(){
    char mystring[5]="ciao";
// Example of puts
    // writes the string in mystring to video (stdout)
    puts(mystring);
// Example of fputs
    FILE *fp;
    fp=fopen("myfile.txt","w");
    // output in file
    fputs (mystring,fp);
    fclose(fp);
    return 0;

}


int input_output_of_strings_example_function(){

    related_to_write_st();
    related_to_read_st();


    return 0;
}