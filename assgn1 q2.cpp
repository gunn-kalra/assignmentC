#include<stdio.h>
int hcf(int,int);
int main()
{
    int a,b,result;
    printf("Enter 2 numbers");
    scanf("%d %d",&a,&b);
    result=hcf(a,b);
    printf("HCF =%d",result);
    return 0;
}
int hcf(int n1,int n2)
{
    int greater,fact,i;
    if(n1>n2)
    greater=n1;
    else
    greater=n2;
    for(i=1;i<=greater;i++)
    {
        if(n1%i==0 && n2%i==0 )
        fact=i;
    }
    return fact;
}