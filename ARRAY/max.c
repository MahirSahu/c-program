#include <stdio.h>
int main(){
    int arr[6]= {57,64,84,63,45,12};
    int max = arr[0];  // minimum value
    for(int i=0;i<6;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("%d",max);
    return 0;
} 