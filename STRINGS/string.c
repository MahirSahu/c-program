#include<stdio.h>
int main() {

    char str[] = "Hello World\0"; // initialization of a string 
    // its not necessary to add \0 at the end of a string in this format, and \0 is added in the string which adds up its size

    int i=0;
    while(str[i] != '\0'){
        printf("%c",str[i]);
        i++;
    }

    // arr[i] , i[arr] , *(arr+i) , *(i+arr)  all of these are same
    return 0;
}