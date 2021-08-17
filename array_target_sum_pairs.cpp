#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binary_search(int a[],int left,int right,int key)
{
	while(left<=right)
	{
		int mid=(left+right)/2;
		if(a[mid]==key)               
		{
			return mid;
		}
		else if(key<a[mid])
		{
			right=mid-1;
		}
		else
		{
			left=mid+1;
		}
	}
	return 0;
	
}
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
	for(int i=0;i<n-1;i++)
	{
		int pos=binary_search(a,i+1,n-1,target-a[i]);
		
		if(pos)
		{
			cout<<a[i]<<" and "<<a[pos]<<"\n";
		}
	}
	return 0;
}