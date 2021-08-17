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
	int a[n];int prefix_sum[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	prefix_sum[0]=a[0];
	for(int i=1;i<n;i++)
	{
		prefix_sum[i]=a[i]+prefix_sum[i-1];
	}
	//cout<<"\n";
	/*for(int i=0;i<n;i++)
	{
		cout<<prefix_sum[i]<<" ";
	}*/
	if(prefix_sum[n-1]%3!=0)
	{
		cout<<"not possible\n";

	}
	else
	{
		int idx1=0,idx2=0;
		int sum=prefix_sum[n-1]/3;
		for(int i=0;i<n;i++)
		{
			if(prefix_sum[i]==sum)
			{
				idx1=i;
			}
			if(prefix_sum[i]==2*sum)
			{
				idx2=i;
			}
		}
		if(idx1==0 && idx2==0)
		{
			cout<<"not possible\n";
		}
		else
		{
			cout<<idx1<<"  "<<idx2<<"\n";
		}
		
	}
	
	
}