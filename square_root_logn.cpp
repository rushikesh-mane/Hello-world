#include<iostream>
#include <algorithm>
using namespace std;
float square_root(int n)
{
	int ans;
	int s=0;
	int e=n;
	int mid=(s+e)>>1;
	if(mid*mid==n)
	{
		return mid;
	}
	else if (mid*mid<n)
	{
		ans=mid;
		s=mid+1;
	}
	else
	{
		e=mid-1;
	}
	//for floating part
	float result=ans;
	int p=4;float inc=0.1;
	for (int i = 0; i < p; ++i)
	{
		while(result*result<n){
		result=result+inc;
		}
		result=result-inc;
		inc=inc/10;
	}
return result;
}
int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input1.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	int n;
	cin>>n;
	cout<<square_root(n);
	return 0;
}