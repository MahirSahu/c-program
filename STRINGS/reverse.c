#include<stdio.h>
#include<string.h>
int main() {

    char str[50];
    gets(str);
    //Size
    int size = 0;
    int k= 0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
    printf("%d\n",size);

    // reverse of string
    for(int i=0,j=size-1;i<=j;i++,j--){
        char z = str[i];
        str[i] = str[j];
        str[j] = z; 

    }
    puts("The reverse of a string is :");
    puts(str);
    return 0;
}