#include<stdio.h>
int main()
{
	int a[50],i,j,k,n=10,cnt=0,
	temp;
  	for(i=1;i<=10;i++)
  		scanf("%d",&a[i]);
  		
  	for(i=1;i<10;i++)
  		for(j=1;j<=n-i;j++)
  			if(a[j]<a[j+1])
  			{
  				temp=a[j];
  				a[j]=a[j+1];
  				a[j+1]=temp;
  				cnt++;
			}	
  				
  				
  for(i=1;i<=10;i++)
  		printf("%d\n",a[i]);
		  
	printf("%d\t",cnt);		
}
