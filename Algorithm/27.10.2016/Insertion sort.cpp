#include<stdio.h>
int main()
{
	int a[50],i,j,k,key,n=10;
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	
		
	for(i=2;i<=n;i++){
	key=a[i];
	j=i;
	while(j>1 && key>a[j-1]){
  		a[j]=a[j-1];
		j--;		
		} 
	a[j]=key;
	}

for(i=1;i<=n;i++)
		printf("%d\t",a[i]);	 
}
