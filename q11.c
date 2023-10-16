// calculator
#include<stdio.h>
void main()
{int num1,num2,option;
do
{printf("\nCHOOSE AN OPTION\n");
printf("1.ADDITION\n2.SUBSTRACTION\n3.MULTIPLICATION\n4.DIVISION\n5.EXIST\n");scanf("%d",&option);
if(option==5)
{break;}
switch(option)
{case 1:
printf("ENTER FIRST INTEGER\n");
scanf("%d",&num1);
printf("ENTER SECOND INTEGER\n");
scanf("%d",&num2);
printf("THE ADDITION OF %d AND %d is: %d\n",num1,num2,num1+num2);
break;
case 2:
printf("ENTER FIRST INTEGER\n");
scanf("%d",&num1);
printf("ENTER SECOND INTEGER\n");
scanf("%d",&num2);
printf("THE SUBSTRACTION OF %d AND %d is: %d\n",num1,num2,num1-num2);
break;
case 3:
printf("ENTER FIRST INTEGER\n");
scanf("%d",&num1);
printf("ENTER SECOND INTEGER\n");
scanf("%d",&num2);
printf("THE MULTIPLICATION OF %d  AND %d is:%d\n",num1,num2,num1*num2);
break;
case 4:
printf("ENTER FIRST INTEGER\n");
scanf("%d",&num1);
printf("ENTER SECOND INTEGER\n");
scanf("%d",&num2);
if(num2==0)
{
printf("ERROR\n");}
else
{printf("THE DIVISION OF %d AND %d is : %d\n",num1,num2,num1/num2);
}
break;
case 5:
break;
default:
printf("INVALID OPTION\n");
break;}}
while(option!=5);}

