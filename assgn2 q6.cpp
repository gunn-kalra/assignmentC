#include<stdio.h>
int main()
{
    int i=0,sum=0,n,avg;
    printf("Enter no of students");
    scanf("%d",&n);
    int marks[n];
    for(i=0;i<n;i++)
    {
        printf("Enter marks of %d",i);
        scanf("%d",&marks[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+marks[i];    
    }
    printf("Marks of all students=%d",sum);
    avg=sum/n;
    printf("\nAverage marks of all students=%d",avg);
    return 0;
}