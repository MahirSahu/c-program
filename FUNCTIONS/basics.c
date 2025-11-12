#include<stdio.h>
void england(){
    printf("You are in England\n");
    return;
}
void India()
{
     printf("You are in India\n");
     england();    // calling function england
    return;
}
int main(){
    India();      // calling function India

    return 0;
}