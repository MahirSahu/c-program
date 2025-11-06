#include<stdio.h>
int main()
{
    // outer loop is for no. of rows
    // inner loop is for no. of columns
    int m;
    printf("enter number of rows:");
    scanf("%d",&m);

    for(int i = 1;i<=m;i++){
        int a=1;
        for(int j = 1;j<=i;j++){
            printf("%d",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}