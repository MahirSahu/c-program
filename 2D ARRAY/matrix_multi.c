#include<stdio.h>
int main()
{
    
    // matrix multiplication
    int arr[3][3] ={{18,10,9},{12,14,14},{10,13,10}};
    int brr[3][3] = {{8,12,16},{10,16,11},{17,12,15}};
    int crr[3][3];

    // logic for multiplication, three loops are required
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int sum = 0;
            for(int k=0;k<3;k++){
                sum+= arr[i][k]*brr[k][j];
            }
            crr[i][j] = sum;
        }
    }

    printf("multiplied matrix is :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ", crr[i][j]);
        }
        printf("\n");
    }

    return 0;
}