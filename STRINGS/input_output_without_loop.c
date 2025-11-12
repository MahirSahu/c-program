#include<stdio.h>
#include<string.h>
int main() {

    char str1[] = "Hello World";

    // printf("%s",str);
    puts(str1);    // acts as print option for strings 
    puts("Hello everyone");  // automatically adds \n in the end 

    char str2[10];
     // scanf(" %s",str2); // no need to put &
     gets(str2);  // gets input of whole string

     printf("input is : %s",str2);  // while printing from scanf only the first world will be considered.


    return 0;
}