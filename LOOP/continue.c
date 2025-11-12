#include<stdio.h>
int main()
{
    // continue statement is used to skip the loop if condition is true and return to starting

    for(int i = 1;i<=100;i++){
        if(i % 2 == 0) // even
        {
            continue;
        }
        printf("%d ",i);
    }

    return 0;
}