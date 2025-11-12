#include<stdio.h>
int main(){
    // outer loop - no. of vertiacl lines ( no of rows )
    // inner loop - no of stars in each line ( no of columns )
    int m , n ;
    printf("enter number of rows :");
    scanf("%d",&m);
    int a=m;
    for(int i = 1;i<=m;i++){
         for(int j=1 ;j<=a ;j++){
             printf("* ");
         }
         a--;
         printf("\n");
     }
     
    return 0;
}