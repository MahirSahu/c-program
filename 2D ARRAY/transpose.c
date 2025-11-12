#include<stdio.h>
int main()
{
    int m,n;
    printf("enter no. of rows: ");
    scanf("%d",&m);
    printf("enter no. of columns :");
    scanf("%d",&n);

    int arr[m][n];
    int brr[n][m];

    // first array input
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d ",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    } 

    printf("\n");
    
    // transpose logic
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            brr[i][j]= arr[j][i];
        }
        printf("\n");
    } 
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    } 
   return 0;

}