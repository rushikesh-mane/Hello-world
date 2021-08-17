#include<iostream>//O(n^2)
#include<climits>
using namespace std;

void cumsum_sub_arrays(int a[],int n)
{
	int cum_sum[n+1]={0};
	


	int csum,msum=INT_MIN;
	for(int i=1;i<=n;i++)
	{
		cum_sum[i]=cum_sum[i-1]+a[i-1];
		//cout<<cum_sum[i]<<"  ";
	}
	cout<<"\n";
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			csum=cum_sum[j]-cum_sum[i];
		//	cout<<csum<<"  ";
			if(csum>msum)
			{
				msum=csum;
			}
		}
	cout<<msum;
	
}}

int main()
{
	int a[9]={-4,1,3,-2,6,2,-8,-9,4};
	cumsum_sub_arrays(a,9);
	
}
