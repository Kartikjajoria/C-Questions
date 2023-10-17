// find the no palindrome or not
#include <stdio.h>
#include <string.h>
int main()
{char string1[20];
int i, length;
int flag = 0;
printf("ENTER A STRING:");
scanf("%s", string1);
length = strlen(string1);
for(i=0;i < length ;i++){
if(string1[i] != string1[length-i-1]){
flag = 1;
break;}}
if (flag) {
printf("%s IS NOT A PALINDROME", string1);}
else {printf("%s IS A PALINDROME", string1);}
}

