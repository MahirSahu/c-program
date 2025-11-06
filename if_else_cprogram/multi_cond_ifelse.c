#include<stdio.h>
int main(){
    // && - and , || - or    
    // heirarchy of && is greater than ||
    // take positive integer input and tell if it is divisible by 5 and 3
    // int x;
    // printf("enter the number :");
    // scanf("%d",&x);
    // if(x%5==0 && x%3==0){
    //     printf("number is divisible by 5 and 3");
    // }
    // else{
    //     printf("not divisible by 3 and 5");
    // }
    int y;
    printf("enter the number :");
    scanf("%d",&y);
    if(y%5==0 || y%3==0){
        printf("number is divisible by 5 or 3");
    }
    else{
        printf("not divisible by 3 and 5");
    }
    return 0;
}