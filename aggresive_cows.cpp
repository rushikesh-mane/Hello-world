//problem based on binary serach in which we have to find monotonic search space and find the answer 
//URL https://www.spoj.com/problems/AGGRCOW/
#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input1.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		int n,c;
		cin>>n;
		cin>>c;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];

		}
		sort(a,a+n);

		int s=1;
		int ans;
		int e=a[n-1]-a[0];
		while(s<=e)
		{
			int mid=(s+e)/2;
			int p=c-1,prev=0;
			for(int i=1;i<n ;i++)
			{
				if((a[prev]+mid)<=a[i])
				{
					p--;
					prev=i;
					
				}
			}
			if(p<=0)
			{
				ans=mid;
				s=mid+1;
			}
			else
			{
				e=mid-1;
			}
		}
		cout<<ans<<"\n";

	}
	
	return 0;
}