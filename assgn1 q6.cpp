#include<stdio.h>
int main(){
    int x,y;
    printf("Enter two numbers in x and y coordinate respectively");
    scanf("%d %d",&x,&y);
    if(x>0 && y>0)
    printf("Point is in first quadrant");
    else if(x<0 && y>0)
    printf("Point is in second quadrant");
    else if(x<0 && y<0)
    printf("Point is in third quadrant");
    else
    printf("Point is in fourth quadrant");
    return 0;
}