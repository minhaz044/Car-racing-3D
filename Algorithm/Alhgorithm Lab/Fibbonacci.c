#include<stdio.h>
int main()
{
  int n,f1=0,i,sum=0,f2=1;
 scanf("%d",&n);
  for(i=2;i<=n;i++)
  {
     sum=f1+f2;
     f1=f2;

     f2=sum;
  }
  printf("%d",f2);
}
