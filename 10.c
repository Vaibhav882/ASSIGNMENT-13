#include<stdio.h>
int power(int,int);
int main()
{
       int base,exponent;
       printf("enter the base:\n");
       scanf("%d",&base);
       printf("enter the exponent\n");
       scanf("%d",&exponent);
       printf("power(%d ^ %d ) = %d\n",base,exponent,power(base,exponent));
       return 0;

}
int power(int b,int e)
{
       if(e==0)
              return 1;
       else
              return (b*power(b,e-1));
}
