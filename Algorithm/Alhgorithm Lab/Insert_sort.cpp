#include<stdio.h>
int main(){
	int a[20];
	int i,j,k,c=0,pos,key,temp,n=10;
	for(k=1;k<=n;k++)
		scanf("%d",&a[k]);
		
for(i=2;i<=n;i++)
{
	key=a[i];
	pos=i;
	while(pos>1 && key<a[pos-1])
	{
		a[pos]=a[pos-1];
		pos--;
	}
	a[pos]=key;
	
}




		for(k=1;k<=n;k++)
		printf("%d\t",a[k]);	
		
	}

	

