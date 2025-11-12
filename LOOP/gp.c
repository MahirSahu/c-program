#include<stdio.h>
int main()
{
    // display this gp- 1,2,4,8,16,32,..upto 'n' terms
    // an = ar^(n-1)

    //  ** for(int i=1; i<=n; i++) ,it will remain same for ap and gp ** . 
    // ** only statement inside for loop will change **.

    int n;
    printf("enter the number");
    scanf("%d",&n);
    // we have to find a , an and r
    int a =1;
    for(int i=1; i<=n; i++){
        printf("%d ",a);
        a=a*2;
    }
    // if gp = 3,12,48,..upto n terms
    int b=3;
    for(int i = 1;i<=n ;i++ ){
        printf("\n%d ",b);
        b=b*4;
    } 
    
    return 0;
}