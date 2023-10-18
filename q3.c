// check weather no is prime or not
#include<stdio.h>

int main()
{
    int n,a,div=0;
    printf("ENTER NUMBER:");
    scanf("%d",&n);
   for(a=1;a<=n;a++)
   {
       if(n%a==0)
      div++;
   }
   if(div>2)
   printf("%d IS NOT A PRIME NUMBER:",n);
   else
    printf("%d IS NOT A PRIME NUMBER:",n);
}

