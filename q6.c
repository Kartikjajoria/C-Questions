#include<stdio.h>
int main()
{int a[]={30,40,63,76,12},i,num,flag=0,index,temp,j;
printf("ENTER NUMBER YOU WANT TO CHECK:");
scanf("%d",&num);
for(i=0;i<5;i++)
{if(num==a[i])
flag=1;
index=i;}
if(flag==1)
printf("%d IS PRESENT IN ARRAY AT INDEX %d\n",num,index);
else
printf("NUMBER IS NOT PRESENT IN ARRAY");
for(i=0;i<5;i++)
{for(j=i+1;j<5;j++)
{if(a[i] > a[j]){
temp=a[i];
a[i]=a[j];
a[j]=temp;}}}
printf("ARRAY ELEMENT IN ASCENDING ORDER:");
for(i=0;i<5;i++)
{printf("\n%d",a[i]);}}

