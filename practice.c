#include <stdio.h>
int main()
{
    // output is done line by line
    // c language is case sensitive language
    // to put a comment - select the text and use "ctrl + /" 
    // \n for new line ( always put under "")
    printf("Mahir\n");

    // variables = like containers to contain some values
    // _ is the only special character we can use as variable 
    // blank space is also not allowed 
    // int used to assign integer variables 
    int x;
    x = 5;

    // %d used to print integers ( data type )
    printf("%d\n",x);

    // new value is assigned to x
    x = x + 7;
    printf("%d",x);

    // we can assign varible and their values in same line
    int y = 7;
    printf("\n%d",y);
    printf("\n%d",y/x);

    // float used to assign decimal variables
    // %f used to print float variables ( real numbers)
    float z = 10.25;
    printf("%f\n",z);

    // arthemetic operation of integer by integer gives integer value only
    // if we apply arthemetic operation on float by integer then we will get float data type
    float m = 6/4;
    float n = 6.0/4;
    printf("%f\n",m);
    printf("%f",n);

    return 0;
}
