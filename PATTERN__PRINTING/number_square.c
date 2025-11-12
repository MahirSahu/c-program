#include<stdio.h>
int main(){
    // outer loop - no. of vertiacl lines ( no of rows )
    // inner loop - no of stars in each line ( no of columns )
    int m;
    printf("enter the number :");
    scanf("%d",&m);
    for(int i =1;i<=m;i++){
        for(int j = 1;j<=m; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    
    return 0;
}