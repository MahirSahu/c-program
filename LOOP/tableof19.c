#include <stdio.h>
int main()
{
    printf("TABLE OF 19\n");
    for (int i = 1; i <= 200; i++)
    {
     if(i%19==0){
            printf("%d ",i);
        }
    }
    // or we can write 
    // for( int i =19; i<=200; i = i+19)
    
    return 0;
}  