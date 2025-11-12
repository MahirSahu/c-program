#include <stdio.h>

int main() {
    int n;
    float sum = 0, variance = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    float arr[n];

    printf("Enter the numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i]; // accumulate sum while reading
    }

    float mean = sum / n;
    printf("Mean is: %f\n", mean);

    for (int i = 0; i < n; i++) {
        variance += ((arr[i] - mean) * (arr[i] - mean)) / n;
    }

    printf("Variance is: %f\n", variance);

    return 0;
}
