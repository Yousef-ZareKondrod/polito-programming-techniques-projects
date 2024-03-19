//
// Created by Lenovo on 3/11/2024.
//
#include <stdio.h>
int third_example_function(void ){

    int n, i, j;
    n = 0;
    printf("Insert an integer >= 2: ");
    scanf("%d", &n);
    printf("\n");
    if (n < 2){
        printf("Error: value < 2\n");
        return -1;
    }
    for(i=0; i<n; i++)
        printf("*");
    printf("\n");
    for(i=2; i<n; i++){
        printf("*");
        for(j=2; j<n; j++)
            printf(" ");
        printf("*\n");
    }
    for(i=0; i<n; i++)
        printf("*");
    printf("\n");
    return 0;

}
