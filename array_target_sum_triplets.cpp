#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input1.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int target;
	cin>>target;
	sort(a,a+n);
	for(int i=0;i<n-2;i++)
	{
		int sum=target-a[i];
		for(int j=i+1,k=n-1;j<k;)
		{
			if(a[j]+a[k]==sum)
			{
				cout<<a[i]<<", "<<a[j]<<" and "<<a[k]<<"\n";
				j++;k--;
			}
			else if(a[j]+a[k]>sum)
			{
				k--;
			}
			else
			{
				j++;
			}
		}
	}
	return 0;
}