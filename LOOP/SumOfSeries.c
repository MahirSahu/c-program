#include<stdio.h>
int main()
{
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    // sum of 1-2+3-4+5...n terms
    int sum = 0;
    // for(int i =0;i<=n;i++){
    //     if(i%2!=0) sum=sum+i;
    //     else sum=sum-i;
    // }

    if(n%2==0) sum = -n/2;
    else sum = -n/2 + n;
    printf("the sum is:%d",sum);

    return 0;
}