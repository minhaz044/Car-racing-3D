#include<stdio.h>
void merge(int a[],int l,int m,int r)
{

int n1=m-l+1;
int n2=r-m;
int L[n1+2],R[n2+2];
int i, j,k;
for(int i=1;i<=n1;i++)
	L[i]=a[l+i-1];

for(int j=1;j<=n2;j++)
	R[j]=a[m+j];

	L[n1+1]=10000;R[n2+1]=10000;
	i=1;j=1;
	for(k=l;k<=r;k++)
	{
		if(L[i]>=R[j])
		{
			a[k]=R[j];
			j++;
		}
		else{
			a[k]=L[i];
			i++;

			}


	}
}
void mergeSort(int a[],int l,int r)
{
		if(l<r)
	{

		int m=(l+r-1)/2;
		mergeSort(a,l,m);
		mergeSort(a,m+1,r);
		merge(a,l,m,r);

	}
	return;
}
int main()
{

	int a[50],n;
	printf("How Many Data You Want To Input\n");
	scanf("%d",&n);
	printf("Enter Your Data\n");
		for(int k=1;k<=n;k++)
		scanf("%d",&a[k]);

		printf("\n");
	mergeSort(a,1,n);
	printf("Data After Sort \n");
	for(int k=1;k<=n;k++)
		printf("%d\t",a[k]);

}
