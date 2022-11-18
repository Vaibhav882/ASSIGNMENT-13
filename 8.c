#include<stdio.h>
int fibo(int);
int main()
{
       int x,i;
       printf("ENTER A NUMBER:  \n");
       scanf("%d",&x);
       for(i=0;i<=x-1;i++)
       printf( "%d  ", fibo(i));
       return 0;

}
int fibo(int n)
{
       if(n==0||n==1)
              return n;
              return fibo(n-1) + fibo(n-2);
}
