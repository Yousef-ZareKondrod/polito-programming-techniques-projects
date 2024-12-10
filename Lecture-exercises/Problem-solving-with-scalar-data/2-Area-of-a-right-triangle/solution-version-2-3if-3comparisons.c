//
// Created by Lenovo on 3/20/2024.
//

#include "solution-version-2-3if-3comparisons.h"

#include <stdio.h>

int solution_version_2_3if_3comparisons_function(void) {
    int a, b, c;
    float area;
    printf("Sides of triangle (a b c): ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b) {/* Hypotenuse is NOT b*/
        if (a > c) {
            printf("Hypotenuse is a\n");
            area = ((float) (b * c)) / 2.0;
        } else {
            printf("Hypotenuse is c\n");
            area = ((float) (a * b)) / 2.0;
        }
    } else /* Hypotenuse is NOT a */
    if (b > c) {
        printf("Hypotenuse is b\n");
        area = ((float) (a * c)) / 2.0;
    } else {    /* Hypotenuse is NOT a and b */
        printf("Hypotenuse is c\n");
        area = ((float) (a * b)) / 2.0;
    }
    printf("Area is %f\n", area);
}
