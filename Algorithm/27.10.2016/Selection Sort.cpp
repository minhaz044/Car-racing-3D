#include<stdio.h>
int main(){
	int a[50],i,j,n=10,max,max_index,temp,cnt;
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
		
		for(i=1;i<=n;i++){
			max=a[i];
			max_index=i;
			for(j=i;j<=n;j++){
				if(max<=a[j])
				{
					max=a[j];
					max_index=j;
			}
		}
		temp=a[i];	
		a[i]=max;
		a[max_index]=temp;
				
	}
	for(i=1;i<=n;i++)
		printf("%d\t",a[i]);
		
}
