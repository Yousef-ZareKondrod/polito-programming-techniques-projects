//
// Created by Lenovo on 3/14/2024.
//
# include <math.h> // pow function is in math library
# include <stdio.h>
// cubeVolume function prototype
int cubeVolume(int sideLength);
// main function
int function_example_function(void) {
    int result;
    result = cubeVolume(2);
    printf("A cube with side length 2 has volume %d\n",
           result);
}
// cubeVolume function
int cubeVolume(int sideLength) {
    int volume = pow(sideLength,3);
    return volume;
}