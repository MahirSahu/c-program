#include<stdio.h>
int main()
{
   // An array is a data structure used in programming
   // to store multiple values of the same type in a single, 
   // organized block of memory. Each value in the array is called an element,
   // and each element is accessible using an index
   // (a number that tells where the element is in the array).

   int arr[5] = {4,5,1,6,2};  // creating 5 spaces at once for integers and also 
    // assigning values to them.
    
    // if size of array is n ,then index(unique value for each value of array)
    // will be from 0 to n-1
    arr[4] = 10;  // {4,5,1,6,10}    updating value of array

    printf("%d\n",arr[4]); // prints 3rd value of array

    float a[4]= {1.2,5.3,8.6,2};
    printf("%f\n", a[0]);

    char c[3]={'a','B','%'};
    printf("%c",c[2]);
    return 0;
} 