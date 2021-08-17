//generate the all prime no.s in the range 0 t0 n
#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;
void prime_factors(int n)
{
	vector<pair<int,int>>factors;
	int cnt=0;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			cnt=0;
			while(n%i==0)
			{
				cnt++;
				n=n/i;
			}
			pair<int,int>p(i,cnt);
		factors.push_back(p);
		}
		
	}
	if(n!=1)
	{
		pair<int,int>p(n,1);
	}
	for(auto p:factors)
	{
		cout<<p.first<<"^"<<p.second<<"\n";
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
	int n;
	cin>>n;
	prime_factors(n);
}