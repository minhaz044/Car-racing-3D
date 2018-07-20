#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a[50],b[50];
    int i,j,n,len1,len2,ab[20][20];
    scanf("%d",&n);
     for(i=0;i<n;i++){
        scanf("%d",&a[i]);
          b[i]=a[i];
     }

   sort(b,b+n);




    for(i=0;i<=n;i++){ab[i][0] =0;}
    for(i=0;i<=n;i++){ab[0][i] =0;}

    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
    {

            if(a[i-1]==b[j-1])
            {

              ab[i][j]=ab[i-1][j-1]+1;

            }
            else if(ab[i-1][j]> ab[i][j-1])
            {
                ab[i][j]=ab[i-1][j];
            }
            else ab[i][j]=ab[i][j-1];



    }
    printf("%d",ab[n][n]);

}

