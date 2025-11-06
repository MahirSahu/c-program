// given th length and breadth of a rectangle , w.a.p t ofind whether the area of the rectangle is greater than its perimeter .
#include <stdio.h>
int main(){
    int x ,y;    // x = length y = breadth
    printf("enter length :");
    scanf("%d",&x);
    printf("enter breadth :");
    scanf("%d",&y);
    int area = x*y;
    int peri = 2*(x+y);
    printf("\narea is %d , and perimeter is %d",area , peri);
    if(area>peri){
        printf("\narea is greater than perimeter");
    }
    else{
        printf("\nperimeter is greater or equal to area");
    }

    return 0;
}