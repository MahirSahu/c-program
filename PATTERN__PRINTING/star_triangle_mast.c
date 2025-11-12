#include<stdio.h>
int main()
{
    // outer loop is for no. of rows
    // inner loop is for no. of columns
    int m;
    printf("enter number of rows:");
    scanf("%d",&m);
    // use of two nested loop

    for(int i=1;i<=m;i++){
        for(int j =1;j<=m-i;j++)  // 1st loop for spaces
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)  // 2nd loop for *
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}