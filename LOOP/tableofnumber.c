#include <stdio.h>
int main()
{
    int n,a;
    printf("enter whose no. you want to print:");
    scanf(" %d",&n);
    for(int i=1;i<=10;i++){
        a=n*i;
        printf("%d ",a);
    }
    
    return 0;
}