//
// Created by Lenovo on 3/12/2024.
//
#include <stdio.h>
int first();
int second();


/* x is assigned 1.75, but the assignment i = x
        produces a conversion to integer, with truncation: i is assigned the value 1. */
int first(){
    float x;
    int i;

    x = 7.0 / 4;
    printf("x = %.02f \n", x);
    i = x;
    printf("i = %d \n", i);

    printf("............. \n");
    return 0;
}

/* explicit cast*/
int second() {
    float x, y, z, w;

    x = 10.5;
    printf("x = %.01f \n", x);
    y = (float) ((int) x * (3 / 2)); // y = 10.0
    printf("y = %.01f \n", y);
    w = x * (float) (3 / 2); // w = 10.5
    printf("w = %.01f \n", w);
    z = x * (float) 3 / (float) 2; // z = 15.75
    printf("z = %.02f \n", z);

    return 0;
}

int cast_example_2_function() {
    first();
    second();

    return 0;


}