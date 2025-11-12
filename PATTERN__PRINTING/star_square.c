#include<stdio.h>
int main()
{
    // outer loop is for no. of rows
    // inner loop is for no. of columns
    int m;
    printf("enter number of rows:");
    scanf("%d",&m);
    for(int i = 1;i<=m;i++){
        for(int j = 1;j<=m;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
int main()
{
   // An array is a data structure used in programming
   // to store multiple values of the same type in a single, 
   // organized block of memory. Each value in the array is called an element,
   // and each element is accessible using an index
   // (a number that tells where the element is in the array).

   int arr[5] = {4,5,1,3,2};  // creating 5 spaces at once for integers and also 
    // assigning values to them.
    
    // if size of array is n ,then index(unique value for each value of array)
    // will be from 0 to n-1
    arr[4] = 10;  // {4,5,1,10,2}    updating value of array

    printf("%d",arr[3]); // prints 3rd value of array
    return 0;
}