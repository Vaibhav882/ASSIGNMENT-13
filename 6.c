#include<stdio.h>
int fact(int);
int main()
{
       int x;
       printf("ENTER A NUMBER:  \n");
       scanf("%d",&x);
       printf("FACTORIAL OF %d IS %d ",x,fact(x));
       return 0;
}
int fact(int n)
{
       if(n==1||n==0)
              return 1;
       return n*fact(n-1);

}
