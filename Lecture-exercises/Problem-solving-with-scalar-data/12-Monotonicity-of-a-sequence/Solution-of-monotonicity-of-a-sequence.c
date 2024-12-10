//
// Created by Lenovo on 5/9/2024.
//
#include "stdio.h"


int main(void) {
    int Monotonous = 1;
    int i;
    int xi, xj;
    printf("x0= ");
    scanf("%d", &xi);


    int N;
    scanf("%d", &N);


    for (i = 1; i < N; i++) {
        printf("x%d= ", i);
        scanf("%d", &xj);
        if (xi > xj) // test on subsequent values
            Monotonous = 0; // update the logic variable
        xi = xj;


//    structured early exit
//    for (i = 1; i < N && Monotonous == 1; i++) {
//        printf("x%d= ", i);
//        scanf("%d", &xj);
//
//        if (xi > xj)
//            Monotonous = 0;
//        xi = xj;
//    }


//   not structured early exit
//    for (i=1; i<N; i++) {
//        printf("x%d= ", i); scanf("%d", &xj);
//        if(xi > xj) {
//            Monotonous = 0;
//            break;
//        }
//        xi = xj;

    }