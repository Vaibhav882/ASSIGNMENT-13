#include<stdio.h>
int countn(int );
int main()
{
       int x;
       printf("ENTER A NUMBER: \n");
       scanf("%d",&x);
       printf("counted digits are:  \n%d",countn(x));
       return 0;
}
int countn(int n)
{
static int count=0;
       if(n==0)
              return count ;
     else{
     count++;
     countn(n/10);
     }
}
