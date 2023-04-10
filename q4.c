#include<stdio.h>
int main()
{
    int i,j,n,k=1;
    for(i=0;i<5;i++)
    {
            printf("\n");
            for(j=1;j<=i;j++)
        {
            printf("%d",k++);
        }
    }
}

