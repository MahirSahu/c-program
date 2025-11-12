#include<stdio.h>
int main()
{
    // to check address of an array we use %p
    // arrays are stored in continuous memory
    int arr[5]={1,2,3,4,5};;
    
    printf("%p ",&arr[2]);
    
    // if we don't add values to arrays then garbage values 
    // are added to the arrays , same applies for integer values also
    return 0;
}