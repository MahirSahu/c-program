#include<stdio.h>
int main()
{
    int n;
    float median, z;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float arr[n];

    // Entering values in array
    printf("Enter the values:\n");
    for(int i = 0; i < n; i++){
        scanf("%f", &arr[i]);
    }

    // Sorting the array
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] > arr[j]){
                z = arr[i];
                arr[i] = arr[j];
                arr[j] = z;
            }
        }
    }

    for(int i = 0; i < n; i++){
        printf("%f ", arr[i]);
    }

    // Calculating median
    if(n % 2 == 0){
        median = (arr[(n/2) - 1] + arr[n/2]) / 2.0;
    }
    else {
        median = arr[n/2];
    }
    printf("Median is %.2f\n", median);

    return 0;
}