#include <stdio.h>
#include <stdlib.h>

int cmp_double(const void *a, const void *b) {
    double da = *(const double*)a;
    double db = *(const double*)b;
    return (da > db) - (da < db);
}

int main(void) {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid count\n");
        return 1;
    }

    double *arr = malloc(n * sizeof(double));
    if (!arr) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%lf", &arr[i]);
    }

    qsort(arr, n, sizeof(double), cmp_double);

    double median;
    if (n % 2 == 1) {
        median = arr[n/2];
    } else {
        median = (arr[n/2 - 1] + arr[n/2]) / 2.0;
    }

    printf("Median = %g\n", median);
    free(arr);
    return 0;
}