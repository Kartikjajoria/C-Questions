// convert hexadecimal no to  binary form
#include<stdio.h>
int main()
{char hexNum[100];
long int count=0;
printf("ENTER HEXADECIMAL NUMBER TO CONVERT IN BINARY: ");
scanf("%s",hexNum);
printf("\nBINARY NUMBER IS : ");
while(hexNum[count])
{switch(hexNum[count]){
case '0' : printf("0000");
break;
case '1' : printf("0001");
break;
case '2' : printf("0010");
break;
case '3' : printf("0011");
break;
case '4' : printf("0100");
break;
case '5' : printf("0101");
break;
case '6' : printf("0110");
break;
case '7' : printf("0111");
break;
case '8' : printf("1000");
break;
case '9' : printf("1001");
break;
case 'A' : printf("1010");
break;
case 'B' : printf("1011");
break;
case 'C' : printf("1100");
break;
case 'D' : printf("1101");
break;
case 'E' : printf("1110");
break;
case 'F' : printf("1111");
break;
case 'a' : printf("1010");
break;
case 'b' : printf("1011");
break;
case 'c' : printf("1100");
break;
case 'd' : printf("1101");
break;
case 'e' : printf("1110");
break;
case 'f' : printf("1111");
break;
default : printf("\nINVALID ENTRY PLEASE TRY AGAIN %c",hexNum[count]);}
count++;
}}

