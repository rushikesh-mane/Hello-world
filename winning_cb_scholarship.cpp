//problem based on binary serach in which we have to find monotonic search space and find the answer 
//URL https://www.spoj.com/problems/PRATA/
#include<iostream>
#include <algorithm>
using namespace std;
bool isPossible(int mid,int m,int x)
{
	if(mid*x<=m)
		return true;
	else
		return false;
}
int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input1.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	int n,m,x,y;
	cin>>n>>m>>x>>y;
	
	int s=0;
	int e=n;
	int ans;
	while(s<=e)
	{
		int mid=(s+e)/2;
		if(isPossible(mid,m,x))
		{
			ans=mid;
			s=mid+1;
		}
		else
		{
			e=mid-1;
		}
	}
	cout<<ans;
	return 0;
}