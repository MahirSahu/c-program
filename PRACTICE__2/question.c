#include <stdio.h>
int main()
{
    int x , y;
    // printf("enter the value of x:");
    // scanf("%d",&x);
    // printf("enter the value of y\n");
    // scanf("&d",&y);
    printf("enter the coordinates:");
    scanf("%d %d",&x,&y);
    if(x!=0 && y!=0){
        printf("given points does not lie on origin");
    }
    else if(x==0 && y!=0){
        printf("line parallel to x axis");
    }
    else if(x!=0 && y==0){
        printf("line parallel to y axis");
    }
    else {
        printf("points lie on origin");
    }
 
    return 0;
} 