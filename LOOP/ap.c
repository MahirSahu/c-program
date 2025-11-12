#include<stdio.h>
int main(){
    // print the a.p. 4,7,10,13,16,...upto n terms
    int n ; // n times loop will repeat
    printf("enter the number:");
    scanf("%d",&n);
    // an = a+(n-1)*d
    // we have to find a , an and d
    // here a=4 , an = 3n+1 , d=3

    // use of extra variables
    int a = 4;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a=a+3;

    }
    // for (int i = 4; i <= 3*n+1; i =i+3)
    // {
    //     printf("%d ",i);
    // }
    
    return 0;
}