#include<stdio.h>
int main()
{
    int i=0,peak,n;
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
        if(marks[i]>marks[i+1] && marks[i]>marks[i-1])
        {
            peak=marks[i];
            printf("\nPeak elements is of%d  %d",i,peak);
        }  
        

    }

    return 0;
}