#include<stdio.h>
int main(){
    // outer loop - no. of vertiacl lines ( no of rows )
    // inner loop - no of stars in each line ( no of columns )
    int m , n ;
    printf("enter number of rows :");
    scanf("%d",&m);
    
    for(int i=1;i<=m;i++){
        int a= 1;
        for(int j=1; j<=i; j++){
            printf("%d ",a);
            a=a+2;
        }
        printf("\n");
    }
    
    
    return 0;
}