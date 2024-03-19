//
// Created by Lenovo on 3/12/2024.
//
#include <stdio.h>

int cast_example_function() {
/* IMPLICIT cast*/
    float x, y;

    x = 10; // converted to = 10.0;
    printf("x = %f \n", x);
    y = x * (2 / 3.0); // converted to y = x * (2.0/3.0);
    printf("y = %f \n", y);

    int a_ascii, n;

/* 97 (the ASCII code of 'a', converted to an integer value) is assigned
to a_ascii, 26 (difference between ASCII codes of 'z' and 'a', seen as
integer) is assigned to n */
    a_ascii = 'a';
    printf("a_ascii = %d \n", a_ascii);
    n = 'z' - 'a' + 1;
    printf("n = %d \n", n);
    return 0;


}