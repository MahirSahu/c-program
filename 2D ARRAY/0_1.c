#include<stdio.h>
int main()
{
    // matrix of 0 & 1 , find row with max 1
    int a[3][4] = {{1,0,1,1},{0,1,0,1},{1,1,1,1}};
    int maxcount = 0;
    int maxindx = -1;
    for(int i = 0;i<4;i++){
        int count =0;
        for(int j=0;j<4;j++){
            if(a[i][j]==1){
                count++;
            }
        }
        if(maxcount<count){
            maxcount = count;
            maxindx = i;
        }
        printf("\n");
    }
    printf("row with max 1 :%d \n",maxindx);
    printf("no. of max 1 :%d",maxcount);

   return 0;

}