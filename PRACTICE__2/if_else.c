#include <stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    // if (condition)
    // {
    //     /* code */
    // }
    
    if(n%2==0){
        printf("even number");
    }

    // if(n%2!=0){
    //     printf("odd number");           not efficient to use if more than once
    // }

    else{
        printf("odd number");
    }
    return 0;

    // we can print more than one statements in if and else condtion 
    
    }
    