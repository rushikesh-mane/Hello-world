#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std ;
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
	int a[n];int profit=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	int i=0;int buy,sell;
	while(i<n-1)
	{

		while(a[i+1]<=a[i] && i<n-1)
		{
			i++;

		}
		buy=i++;
		while(a[i]<=a[i+1] && i<n-1)
		{
			i++;
		}
		sell=i++;
		profit=profit+a[sell]-a[buy];

		cout<<"buy "<<buy<<"sell "<<sell<<"\n";
	}
	if(profit<=0)
	{
		cout<<"cant make any profit\n";
	}
	else
	{
		cout<<profit<<"\n";
	}
	
	
}