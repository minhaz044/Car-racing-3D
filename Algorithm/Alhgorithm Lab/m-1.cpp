#include<stdio.h>
int main()
{
	 long int t,n,div,mud,sum;
	scanf("%ld",&n);
		sum=0;
		div=n;
	while(n>10)                                                                 
	{
	
		
		while(div>0)
		{
			
			mud=div%10;
			div=div/10;
			sum=sum+mud; 
			n=sum;
		}
		
		
	div=sum;
	if(sum>10)
	{
		sum=0;
	}
		
	}
	
	printf("%d\n",sum);
}
