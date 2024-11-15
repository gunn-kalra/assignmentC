#include<stdio.h>
int main()
{
    int i=0,n;
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
        if(marks[i]%2==0)
        {
            printf("\nmarks of %d is even",i);
        }  
        else
        {
            printf("\nmarks of %d is odd",i);
        }  
    }
    return 0;
}