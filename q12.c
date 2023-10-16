// display amstrong no, prime no, reverse of an integer
#include<stdio.h>
int main()
{
  int n;

  do
  {
    printf("1. Print armstrong numbers upto N\n");
    printf("2. Display prime numbers upto N\n");
    printf("3. Reverse of an integer\n");
    printf("enter your choice--> ");
    scanf("%d", &n);
  }while(n>3);


  switch(n)
  {
    case 1:
    {
      int armstrong, n, i, r, sum, num;

      printf("enter the value of n--> ");
      scanf("%d", &num);


      for(i=0; i<=num; i++)
      {
        n=i;
        sum=0;
        armstrong=n;


        while(n!=0)
        {
          r=n%10;
          sum=sum+r*r*r;
          n=n/10;
        }

        if(sum==armstrong)
        printf("%d ", sum);
      }


      break;

    }

    case 2:
    {
      int i, n, j, count;

      printf("enter the value of n--> ");
      scanf("%d", &n);

      for(i=0; i<=n; i++)
      {
        count=0;
        for(j=0; j<=i; j++)
        {
          if(i%j==0)
          count++;
        }
        if(count==2)
      printf("%d ", i);
      }

      break;

    }

    case 3:
    {
      int rev=0, n, digit;

      printf("enter the value of n--> ");
      scanf("%d", &n);



      while(n!=0)
      {
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
      }

      printf("reverse of the given integer is--> %d", rev);
      break;

    }


    }

    }
