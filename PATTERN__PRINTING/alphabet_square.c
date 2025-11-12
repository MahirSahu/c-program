#include<stdio.h>
int main(){
    // outer loop - no. of vertiacl lines ( no of rows )
    // inner loop - no of stars in each line ( no of columns )
    int m , x ;
    printf("enter number of rows :");
    scanf("%d",&m);
    
    for(int i=1 ; i<=m ;i++) {
        int a= 1;
        for(int j=1 ; j<=m ;j++){
             int x = a+64;
            char ch = (char)x; // ch=(char)65 = ch = 'A'
        printf("%c ",ch);
        a++;
        }
        printf("\n");
    }
    
    return 0;
}