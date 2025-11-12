#include<stdio.h>
int main() {
    
    char arr[] = {'h','i'};
    // char ch = 'ab' invalid because of two characters stored in one
    char ch = '\0';  // null character , its ascii value os 0
    printf("%c",ch);
    for(int i = 0;i<2;i++)
    printf("%c",arr[i]);
    
    return 0;
}