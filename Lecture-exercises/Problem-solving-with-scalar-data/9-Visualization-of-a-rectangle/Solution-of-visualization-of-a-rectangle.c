#include <stdio.h>

//
// Created by Lenovo on 5/9/2024.
//
void rectangle(int b, int h) {
    int i, j;
    for (i = 0; i < h; i++) { // iterates on rows
        for (j = 0; j < b; j++) // iterates on columns
            if (i != 0 && i != h - 1 && j != 0 && j != b - 1)
                printf(" ");
            else
                printf("*");
        printf("\n");
    }
}


int main(void) {
    int b, h;
    printf("enter b:");
    scanf("%d", &b);
    printf("enter h:");
    scanf("%d", &h);
    rectangle(b, h);
    return 0;
}