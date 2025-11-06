#include <stdio.h>
int main(){
    int a[4];
    for(int i=0;i<=3;i++){
        printf("enter the values :\n");
        scanf("%d", &a[i]);
    }
    printf("%d",a[3]);
    return 0;
} 