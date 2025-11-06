#include<stdio.h>
int main()
{
    // enter a number which is divisible by 5 or 3 by not by 15
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    // the is different else statement for both if statements
    if(n%5==0 || n%3==0){
        if(n%15!=0){
            printf("number is divisible by 3 or 5");
        }
        else {
            printf("number divisible by 15 ");
        }
    }
        else {
            printf("number divisible by 5 or 3 but not by 15");

            // or we can use && , || option

            //if((n%5==0 || n%3==0)&& n%15!=0){}
            // printf("divisible by 5 or 3 but not by 15");
            // }
            // else{
            //printf("not satisfying the given condition");
            // }
    return 0;
}
}