#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    printf("Numbers before swapping %d %d",a,b);
    // method 1 swapping using third variable
   /* c=a;
    a=b;
    b=c;
    printf("Numbers after swapping %d %d",a,b);*/
    //method 2
   /* a=a+b;
    b=a-b;
    a=a-b;
    printf("Numbers after swapping %d %d",a,b);*/
    //Method 3 using XOR
   /* a=a^b;
    b=a^b;
    a=a^b;
    printf("Numbers after swapping %d %d",a,b);*/
    int *pa = &a;
    int *pb = &b; 
    int *x=pa;
    pa=pb;
    pb=x;
    printf("Numbers after swapping %d %d",*pa,*pb);
    return 0;

}