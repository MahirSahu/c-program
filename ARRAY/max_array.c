#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of terms :\n");
    scanf("%d",&n);
    int max = -1;  // store smallest value

    printf("Enter values of array :\n");
    for(int i=0;i<n;i++){
        int arr[n];
        scanf("%d",&arr[i]);
    if(max < arr[i] ){
        max =arr[i];
    }
}
    printf("%d ",max);
    return 0;
}