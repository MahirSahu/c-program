#include<stdio.h>
int main(){
    // outer loop - no. of vertiacl lines ( no of rows )
    // inner loop - no of stars in each line ( no of columns )
    int m ;
    printf("enter no. pf rows:");
    scanf("%d",&m);
    for(int i = 1;i<=m;i++){
       for(int j = 1;j<=m;j++){
        if(i==j || i+j==m+1 )
        {
            printf("*");
        }
        else printf(" ");
    }printf("\n");
} 
    
    
    return 0;
}