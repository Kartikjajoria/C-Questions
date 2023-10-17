// find avg marks of students
#include<stdio.h>
int main()
{int a[55],i,n;
float sum=0,average;
printf("ENTER NUMBER OF STUDENTS:");
scanf("%d",&n);
for(i=0;i<n;i++)
{printf("ENTER MARKS OF STUDENTS:");
scanf("%d",&a[i]);}
for(i=0;i<n;i++)
{sum=sum + a[i];}
average=sum/n;
printf("AVERAGE MARKS OF STUDENTS: %f",average);
}

