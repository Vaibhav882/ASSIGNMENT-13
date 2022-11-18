#include<stdio.h>
int sum(int);
int main()
{
       int x,s;
       printf("ENTER A NUMBER:  \n");
       scanf("%d",&x);
       s = sum(x);
       printf("SUM OF SQUARE OF FIRST %d NATURAL NUMBER IS %d ",x,s);
       return 0;
}
int sum(int n)
{
       if(n==1)
              return 1;
       return (n*n+sum(n-1));
}
