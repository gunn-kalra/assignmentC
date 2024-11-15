#include<stdio.h>
void arm(int);
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    arm(a);
    return 0;
}
void arm(int num)
{
int a,c,og;
int sum=0;
a=0;
og=num;
while(num>0)
{
    c=num%10;
    sum=sum+c*c*c;
    a=a*10+c;
    num=num/10;

}
if(og==sum)
printf("Armstrong");
else
printf("Not Armstrong");

}