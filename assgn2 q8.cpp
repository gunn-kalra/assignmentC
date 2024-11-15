#include<stdio.h>
int main()
{
    int i=0,max,min,n;
    printf("Enter no of students");
    scanf("%d",&n);
    int marks[n];
    for(i=0;i<n;i++)
    {
        printf("Enter marks of %d",i);
        scanf("%d",&marks[i]);
    }
    max=marks[0];
    min=marks[0];
    for(i=0;i<n;i++)
    {
        if(marks[i]>max)
        {
            max=marks[i];
            
        }  
        else if(marks[i]<min)
        {
            min=marks[i];
        }  
    }
    printf("\nMaximum marks =%d",max);
    printf("\nMinimum marks =%d",min);
    return 0;
}