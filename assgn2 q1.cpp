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
    printf("Updated array");
    for(i=0;i<n;i++)
    {
    printf("%d \n",(marks[i]+5));
    }
    return 0;
}