#include <stdio.h>
// function to validate the time
int ValidateTime(int hh , int mm , int ss)
{int ret=0;
if(hh>24)   ret=1;
if(mm>60)   ret=1;
if(ss>60)   ret=1;
return ret;}
int main(){
char string[100]={0};
int ret=0,hour=0,min=0,sec=0;
printf("\nEnter the time in \"hh:mm:ss\" format : ");
fgets(string,100,stdin);
sscanf(string , "%d:%d:%d" , &hour,&min,&sec);
ret = ValidateTime(hour,min,sec);
if(ret)
{printf("\nInvalid Time. Try Again.\n");
}else
{
printf("\nThe Time is : %d:%d:%d\n",hour,min,sec);}
return 0;}

