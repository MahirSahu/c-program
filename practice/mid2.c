#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float median,z;
    printf("enter the number of elements:");
    scanf(" %d",&n);

    float arr[n];
    // entering values in array
    printf("enter values in array :");
    for(int i=0;i<n;i++){
        scanf(" %f",&arr[i]);
    }

    // sorting the array
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                z=arr[i];
                arr[i] = arr[j];
                arr[j] = z;
            }
        }
    }
    
    // calculating median
    if(n%2==0){
        median = (arr[(n/2) - 1] +arr[n/2])/2;
    }
    else median = arr[n/2];
    printf("median is %f",median);

    return 0;
}