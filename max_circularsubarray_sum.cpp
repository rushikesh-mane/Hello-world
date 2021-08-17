#include<iostream>//O(n^2)
#include<climits>//kadane 's algorithm for max_sum of subarray O(n)
using namespace std;

int  kadane(int a[],int n)
{
	int csum=0,msum=0;
	for(int i=0;i<n;i++)
	{
		csum=csum+a[i];
		if(csum<0)
		{
			csum=0;
		}
		msum=max(csum,msum);
	}
	return msum;
}
void max_circular_subarray(int a[],int n)
{
	int kadane_sum=kadane(a,n);

	 int max_sum=0;
	 for(int i=0;i<n;i++)
	 {
	 	max_sum=max_sum+a[i];
	 	a[i]=-a[i];
	 }
	 max_sum=max_sum+kadane(a,n);
	 max_sum=max(max_sum,kadane_sum);
	 cout<<max_sum<<"\n";
}
int main()
{
	int  t;
	cin>>t;

	for(int k=0;k<t;k++)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		max_circular_subarray(a,n);
	}
	
}
