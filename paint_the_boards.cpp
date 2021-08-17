//problem based on binary serach in which we have to find monotonic search space and find the answer 
//URL https://www.spoj.com/problems/PRATA/
#include<iostream>
#include <algorithm>
using namespace std;
bool isPossible_to_paint(long long a[],int n,int k,int cur_time)
{
	long long units_painted=0;
	int painter=1;
	for(int i=0;i<n;i++)
	{
		if(units_painted+a[i]>cur_time)
		{
			painter++;
			units_painted=a[i];
			continue;
		}
		cout<<painter<<"  ";
		units_painted=units_painted+a[i];
	}
	if(painter<=k && units_painted<=cur_time)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input1.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	int k;
	cin>>k;
	int n;
	cin>>n;
	long long a[n];long long ans;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	long long s=0;
	long long e=0;
	for(int i=0;i<n;i++)
	{
		e=e+a[i];
	}
	cout<<"\n"<<s<<"  "<<e;
	while(s<=e)
	{
		int mid=(s+e)/2;
		cout<<"\nmid-->"<<mid<<"  ";
		if(isPossible_to_paint(a,n,k,mid))
		{
			ans=mid;
			e=mid-1;
		}
		else
		{
			s=mid+1;
		}
	}
	cout<<ans;
	return 0;
}