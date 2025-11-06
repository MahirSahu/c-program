#include<stdio.h>
int main()
{
    // print transpose of a n*n matrix
    int n;
    printf("enter size of matrix: ");
    scanf("%d", &n);
    int matrix[n][n], transpose[n][n];
    printf("enter the elements of a matrix :\n");
    for(int i =0;i<n;i++){
        for (int j=0;j<n;j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("the given matrix is:\n");
    for(int i =0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }

    // Compute transpose
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("\nTranspose of the matrix is:\n");
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

}