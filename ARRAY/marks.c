#include <stdio.h>
int main(){
    int marks[7]={80,50,24,68,79,15,02};
    for(int i=0;i<7;i++){
        if(marks[i]<35)
        printf("%d ",i);
    }
    return 0;
}