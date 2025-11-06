#include<stdio.h>
int main()
 {
    // Any year is input through the keyboard. write a program to determine whether the year is leap year or not ?
    int x;
    printf("enter year:");
    scanf("%d",&x);
    if(x%4==0){
        printf("Leap Year");
    }
    else{
        printf("not a leap year");
    }

    // absolute value of a number 
    int y;
    printf("\nenter a number:");
    scanf("%d",y);
    if(y<0){
        y = y*(-1);
    }
    printf("the absolute value is %d",y);

    return 0;
}