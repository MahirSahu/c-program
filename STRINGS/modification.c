#include<stdio.h>
int main() {

    char str[] = "Hello World\0"; // initialization of a string 
    str[2]='b'; // inter changed b with l
    int i=0;
    while(str[i] != '\0'){
        printf("%c",str[i]);
        i++;
    }

    return 0;
}