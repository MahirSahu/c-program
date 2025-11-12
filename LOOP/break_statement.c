#include<stdio.h>
int main()
{
    // break = used to terminate loop 
    // print whether a number is prime or not
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    int a=0;
    for(int i=2;i<n;i++){
        if(n%i==0){ // i is a factor of n 
            a=1;
            break;
        }
    }
    if(a==0){
        printf("The number is prime\n");
    }
    else{
        printf("number is composite\n");
    }
    return 0;
}