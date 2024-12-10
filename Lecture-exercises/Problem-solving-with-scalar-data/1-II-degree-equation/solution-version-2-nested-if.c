//
// Created by Lenovo on 3/19/2024.
//

#include "solution-version-2-nested-if.h"
#include <math.h>
#include <stdio.h>
int solution_version_2_nested_if_function(void) {
    float a,b,c,delta,x0,x1,re,im;
    printf("Insert coefficients (a b c): ");
    scanf("%f%f%f",&a,&b,&c);
    if (a==0) {
        if (b==0) {
            if (c==0)
                printf("Indetermined equation\n"); 
            else
                printf("Impossible equation\n");
        }
        else {
            printf("I degree equation\n ");
            printf("Solution: %f\n", -c/b); }
    }
    else {
        delta = b*b-4*a*c;
        if (delta == 0) {
            x0 = (-b)/(2*a);
            x1 = (-b)/(2*a);
            printf("2 real coincident solutions: ");
            printf("%f %f\n",x0,x1);
        }
        else /* if delta != 0 */
            if (delta > 0) {
                x0 = (-b-sqrt(delta))/(2*a);
                x1 = (-b+sqrt(delta))/(2*a);
                printf("2 real distinct solutions: ");
            }
            else { /* delta < 0 */
                re = -b/(2*a);
                im = sqrt(-delta)/(2*a);
                printf("compl.conj.: \n"
                       "x0=%f-i*%f x1=%f+i*%f\n",
                       re, im, re, im);
            }
    }
}