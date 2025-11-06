#include<stdio.h>
int main()
{
    // outer loop is for no. of rows
    // inner loop is for no. of columns
    int m;
    printf("enter number of rows:");
    scanf("%d",&m);

    // int a;
    // for(int i = 1;i<=m;i++){
    //     if(i%2!=0) a=1;
    //     else a=0;
    //     for(int j = 1;j<=i;j++){
    //         printf("%d",a);
    //         if (a==0) a=1;
    //         else a=0;
    //     }
    //     printf("\n");
    // }

    // or
    for(int i = 1;i<=m;i++){
        
        for(int j = 1;j<=i;j++){
            int a=i+j;
            if(a % 2==0) printf("1 ");
            else printf("0 ");
        }
        printf("\n");
    }
    return 0;
}