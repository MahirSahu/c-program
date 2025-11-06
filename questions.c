// wap to display area of a circle 
#include<stdio.h>
int main()
{
    // float r = 5;
    // float pi = 3.14159;
    // float a = pi*r*r; 
    // printf("The area of circle is: %f", a);

    // print percentage of 4 subjects whose marks are out of 40
    // can also put variable names in one line
    
    // int m1,m2,m3,m4;
    // m1 = 37;
    // m2 = 30;
    // m3 = 19;
    // m4 = 25;
    // float sum = (m1+m2+m3+m4);
    // float percentage = (sum/160)*100;
    // printf("\nThe percentage obtained is: %f\n",percentage);



    // print fractional part of float number

    // float x;
    // printf("enter a decimal number:");
    // scanf("%f",&x);
    // int y;
    // y = x;
    // float z = x -y;
    // printf("%f",z);

    // Hierarchy of operators - left to right , addition and sub are done in last!!
    int i = 2*3/4 + 4/4 + 8 - 2 + 5/8;
    printf("\nvalue of i :%d\n",i);
    
    int x = 2,y = 3, k,l;
    float a , b;

    k = x+y*y; // 0
    l = y/x*x; // 2
    a = x/y*y; // 0
    b = y/x*x; // 2
    printf("%d %d %f %f", k,l,a,b);

    return 0;
}