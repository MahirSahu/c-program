#include<stdio.h>
int main()
{
    // wap to print sum of digits of a given number
    int n;
    printf("enter the number :");
    scanf("%d",n);
    int sum =0;
    int lastDigit = 0;
    while(n!=0){
        lastDigit = n%10;
        sum = sum + lastDigit;
        n=n/10;
    }
    printf("The sum of digits is %d",sum);
    return 0;
}