#include<stdio.h>
int main(){
    // outer loop - no. of vertiacl lines ( no of rows )
    // inner loop - no of stars in each line ( no of columns )
    int m , n ;
    printf("enter number of rows :");
    scanf("%d",&m);
    printf("no of columns :");
    scanf("%d",&n);
    for( int i = 1;i<=m;i++){
        for(int i = 1;i<=n;i++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}