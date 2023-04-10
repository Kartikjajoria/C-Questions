#include<stdio.h>
int fact(int n);
int fibo();
int main()
{int option;
int f,n;
int m,i,p;
do{
printf("1.factorial using recursion.\n2.fibonacci series using recursion.\n3.exit.\n");
scanf("%d",&option);
switch(option)
{case 1:
printf("\n enter number to find factorial:");
scanf("%d",&n);
f= fact(n);
printf("\n value of factorial is=%d\n",f);
break;
case 2:
printf("\n enter the limit of fiooonaci series:");
scanf("%d",&m);
for(i=0;i<=m;i++){
p=fibo(i);
printf("\n %d",p);}
break;
case 3:
break;
default:
printf("invalid option ");}}
while(option!=3);}
int fact(int n)
{
    int b;
if(n==1)
return 1;
b = n*fact(n-1);
return b;}
int fibo(int n)
{int s;
if(n==1 || n==0)
return 1;
else
s=(n-1)+(n-2);
return s;}

