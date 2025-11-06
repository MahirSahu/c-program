#include<stdio.h>
int main()
{
    // if we use if statement again and again system will read every if ststement if all are correct and print them all 
    // to overcome this problem we use else if statement .
    int n;
    printf("enter the percentage:");
    scanf("%d",&n);
    if(n>90){
        printf("excellent!!");
    }
    else if(n>80){
        printf("verygood!");
    }
    else{
        printf("good");
    }
    return 0;
}