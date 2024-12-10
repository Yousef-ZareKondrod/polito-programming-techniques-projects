//
// Created by Lenovo on 3/20/2024.
//

#include "complete-solution-main-with-function-binary.h"

#include <stdio.h>
#include "stdlib.h"

void binary(int n); // prototype
int complete_solution_main_with_function_binary_function(void) {
    int v;

    printf("Insert positive number: ");

    printf("Binary conversion: ");
    binary(v); // function call
    return 0;
}

void binary(int n) // function definition
{
    int p;
    for (p = 1; 2 * p <= n; p = p * 2);
    while (p > 0) {
        if (p <= n) {printf("1");
            n = n- p;
        }
        else printf("0");
        p = p / 2;

    }
    printf("\n");
}