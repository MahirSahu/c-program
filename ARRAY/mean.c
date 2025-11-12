#include<stdio.h>
#include<math.h>
int main()
{
    // to find mean and variance
    int n;
    float sum = 0 , variance =0;

    printf("enter no. of terms :");
    scanf("%d", &n);

    float arr[n];

    printf("enter the numbers :");

    for(int i=0;i<n;i++){
        scanf("%f", &arr[i]);
        sum += arr[i];
    }
    
    float mean = sum/n;
    printf("mean is: %f\n ", mean);

    for(int i=0;i<n;i++){
        variance += ((arr[i]-mean)*(arr[i]-mean)) /n;
    }
    float stdev = sqrt(variance);
    printf("variance is : %f\n", variance);
    printf("stdev is : %f", stdev);
    return 0;
}