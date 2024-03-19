//
// Created by Lenovo on 3/10/2024.
//
/*
 This program simulates an elevator panel
 that skips the 13th floor. */
#include <stdio.h>


int second_example_function (void) {
    // declare/define variables
    int floor,
            actualFloor;
    // Obtain floor number from the user as an integer
    printf ("Floor: "); scanf ("%d", &floor);

    /* Adjust floor if necessary. */
    if (floor > 13) actualFloor = floor - 1;
    else actualFloor = floor;

    // Print the result.
    printf("The elevator will travel to the ");
    printf("actual floor %d\n", actualFloor);
    return 0;
}