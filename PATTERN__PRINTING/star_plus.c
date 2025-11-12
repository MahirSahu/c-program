#include<stdio.h>
int main(){
    // outer loop - no. of vertiacl lines ( no of rows )
    // inner loop - no of stars in each line ( no of columns )
    int m ;
    printf("enter no. pf rows:");
    scanf("%d",&m);  // m should be odd
    for(int i = 1;i<=m;i++){

        int a = (1+m)/2;
        for(int j=1;j<=m;j++){

            if (j==a || i==a)
            {
                printf("*");
            }
            else printf(" ");
            
        }
        printf("\n");
    }
    
    
    return 0;
}