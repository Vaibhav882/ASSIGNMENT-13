#include<stdio.h>
int hcf(int,int);
int main()
{
       int x,y;
       printf("ENTER TWO NUMBER:  \n");
       scanf("%d%d",&x,&y);
       printf("HCF of %d and %d is %d",x,y,hcf(x,y));
       return 0;
}
int hcf(int a,int b)
{
       if(a%b==0)
              return b;
              if(a>b)
               hcf(a%b,b);
       else
              hcf(b%a,a);

}
