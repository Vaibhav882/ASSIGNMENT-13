#include<stdio.h>
int sumd(int);
int main()
{
       int x,s;
       printf("ENTER A NUMBER:  \n");
       scanf("%d",&x);
       s = sumd(x);
       printf("sum of digits of %d is %d",x,s);
       return 0;
}
int sumd(int n)
{
       int ;
       if(n>0)
           return n%10+sumd(n/10);
}
