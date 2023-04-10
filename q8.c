#include<stdio.h>
int main()
{int n1,n2,*p1,*p2,a,s,m,d;
p1=&n1;
p2=&n2;
printf("\nENTER A NUMBER:");
scanf("%d",&n1);
printf("\nENTER A NUMBER:");
scanf("%d",&n2);
a=*p1+*p2;
printf("\nADDITION:%d",a);
s=*p1-*p2;
printf("\nSUBTRACTION:%d",s);
m=(*p1)*(*p2);
printf("\nMULTIPLICATION:%d",m);
d=(*p1) / (*p2);
printf("\nDIVISION:%d",d);}

