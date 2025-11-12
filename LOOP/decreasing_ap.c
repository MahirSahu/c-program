#include<stdio.h>
int main()
{
    // display ap = 100,97,94,....upto all positive terms.

    // we can use multiple conditions in for loop for different variables
    
    int  a = 100 ;
    for(int i =1; a>0 ;i++){
        printf("%d ",a);
        a=a-3;
    }

    // display gp = 100,50,25,.. upto n terms
    float n;
    printf("enter no. of terms: ");
    scanf("\n%f",&n);
    float b=100;
    for(int i =1;i<=n;i++){
        printf("%f ",b);
        b=b/2;
    }
    
    return 0;
}