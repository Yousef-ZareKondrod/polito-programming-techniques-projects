//
// Created by Lenovo on 3/20/2024.
//

#include "solution-version-1-3if-6comparisons.h"

#include <stdio.h>
int solution_version_1_3if_6comparisons_function(void) {
    int a,b,c;
    float area;
    printf("Sides of triangle (a b c): ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c) {
        printf("Hypotenuse is a\n");
        area = b*c/2.0;
    }
    else if (b>a && b>c) {
        printf("Hypotenuse is b\n");
        area = a*c/2.0;
    }
    else if (c>a && c>b) {
        printf("Hypotenuse is c\n");
        area = a*b/2.0;
    }
    printf("Area is %f\n", area);
}