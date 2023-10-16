// find the greatest no among three nos
#include<stdio.h>

int main()
{ int x,y,z;
  printf("ENTER THE FIRST NUMBER:");
  scanf("%d",&x);
  printf("ENTER THE SECOND NUMBER:");
  scanf("%d",&y);
  printf("ENTER THE THIRD NUMBER:");
  scanf("%d",&z);
  if (x>y && x>z)
  printf("%d IS THE GREATEST NUMBER",x);
  else if (y>x && y>z)
  printf("%d IS THE GREATEST NUMBER",y);
  else
  printf("%d IS THE GREATEST NUMBER",z);
}

