//
// Created by Lenovo on 3/10/2024.
//
#include <stdio.h>

int first_example_function(void) {
    printf("%d\n", 3 + 4); // print 7

    // print Hello world! on two lines
    printf("Hello\n");
    printf("world!\n");


    // print multiple values
    // with a single print function call
    printf("My numbers are %d and %d\n", 3 + 4, 3 + 10); // can be on multiple lines
    // print  messages with empty line in between
    printf("Goodbye\n\nHope to see you again\n");
    return 0;
}
