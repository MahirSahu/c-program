#include<stdio.h>
int main()
{
    // ternary operator - three operators at once
    //  exp1 ? exp2 : exp3
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    n%2==0 ? printf("even number") : printf("odd number");
    // not preferable in nested if else statements !!
    return 0;
}