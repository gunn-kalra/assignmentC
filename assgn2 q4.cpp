#include<stdio.h>
int main()
{
    int i=0,count=0,n;
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
        if(marks[i]==99)
        {
            printf("\n Student with 99 marks%d",i);
            count=count+1;
        }
    }
    printf("\n Total students with 99 marks%d",count);
    return 0;
}