#include<stdio.h>
#include<math.h>
int main()
{
	int n,t,div,mud,sum=0,i=0;
	scanf("%d",&div);
	while(div>0)
	{
		
		
		mud=div%3;
		div=div/3;
		printf("%d    %d\n",mud,div);
		if(sum==0)
		{
			sum=sum*1+mud;
		}
		else
		{
			sum=sum*10+mud;
		}
		
			//printf("%d\n",sum);
		//i++;
		
	}
	printf("%d\n",sum);
}

