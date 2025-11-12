#include<stdio.h>
int main()
{
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    int r = 0;
    while(n!=0){
        int lastdigit = n%10;
        r =r*10;
        r = r+(lastdigit);
        n  = n/10;
    }
    printf(" the reversed the number is :%d",r);
   return 0;
}

