#include <stdio.h>
int main()
{
    // printf - for output ( we don't use &)
    // scanf - for input ( we use & ) , &x - address of x 
    
    // take two integers as input a and b , a>b , 
    // and find the remainder when a is divided by b.
    int a,b;
    printf("Value of first integer:");
    scanf("%d",&a);
    printf("\nValue of second integer:");
    scanf("%d",&b);
    // conventional method :
    // int q;  
    // q = quotiont
    // // q = a/b;
    // int r;  // r = remainder
    // r = a-(b*q);
   
    //  using modulo operator(" % ") = to get the remiander
    float r = a%b;
    printf("the remainder is %f",r);
    
    // if a < b , then a % b = a

    // '=' assigning values ; '==' condition
    // conditions :- 
    // a==b ; a<b ; a>b ; a<=b ; a>=b
    
    // difference between x++ and ++x , x-- and --x
    // x++ = use x and then increase the value of x
    // ++x = increase x and then use value of increased x

    int x=4,y,z;
    y=--x;
    z=x--;
    printf("\n x=%d, y=%d, z=%d",x,y,z);

    return 0;
}