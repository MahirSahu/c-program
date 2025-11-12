#include<stdio.h>
int main()
{
    // Given an array of marks of students , if the marks of any student is
    // less than 35 print its roll no. ( roll no = index no. )
    int marks[10]={95,90,31,25,48,65,21,35,10,68};
    for(int i=0;i<10;i++){
        if(marks[i]<35){
            //if we want to print the marks
           // printf("%d ", marks[i]);
        printf("%d ",i);
    }
}
    return 0;
}