#include<stdio.h>
int main()
{
    int a,sum=0;
    printf("Enter a number");
    scanf("%d",&a);
    for(int i=1;i<a;i++)
    {
        if(a%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==a)
    printf("It is perfect number");
    else
    printf("Not a perfect number");
    return 0;
}