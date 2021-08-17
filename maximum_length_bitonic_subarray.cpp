
#include<iostream>
#include<climits>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		long n;
		cin>>n;
		int a[n];
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
		}
		int inc[n];
		int dec[n];

		for(int i=0;i<n;i++)
		{
			inc[i]=1;dec[i]=1;
		}
		cout<<"\n";
		for(int i=1;i<n;i++)
		{
			if(a[i-1]<=a[i])
			{
				inc[i]=inc[i]+inc[i-1];
			}

		}

		for(int i=n-2;i>=0;i--)
		{
			if(a[i]>=a[i+1])
			{
				dec[i]=dec[i]+dec[i+1];
			}

		}
		int sum=inc[0]+dec[0]-1;
		for(int i=1;i<n;i++)
		{
			int temp=inc[i]+dec[i]-1;
			if(temp>sum)
			{
				sum=temp;
			}
		}
		cout<<sum<<"\n";
	}
}
