#include<stdio.h>
int main()
{
    // print factorial of a given number 'n'
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    int product = 1;
    for(int i = 1;i<=n;i++){
        product=product*i;
    }
    printf("the factorial is :%d",product);
    
   return 0;
}