//
// Created by Lenovo on 3/20/2024.
//

#include "solution-n-th-reduced-of-harmonic-series.h"
#include <math.h>
#include <stdio.h>

int solution_n_th_reduced_of_harmonic_series_function(void) {
    int n, i;
    float HN;
    printf("Number of terms (<=0 to END): ");
    scanf("%d", &n);
    while (n > 0) {
        /* compute and print HN */
        HN = 0.0;
        for (i = 1; i <= n; i++)
            HN = HN + 1.0 / ((float) i);
        printf("Result: %f\n", HN);
        printf("Number of terms (<=0 to END): ");
        scanf("%d", &n);
    }
}