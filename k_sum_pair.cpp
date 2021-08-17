//O(nlogn) searching sum-a[i] in the remaining array using bianry search 
#include<bits/stdc++.h>
using namespace std ;
int binary_search(int a[],int start,int end,int key)
{
	int mid;
	while(start<=end)
	{
		mid=(start+end)/2;
		if(a[mid]==key)
		return mid;
		else if(a[mid]>key)
		end=mid-1;
		else
		start=mid+1;
	}
	return 0;
}
int main()
{
int n,sum;
cin>>n;
cin>>sum;
int a[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
	sort(a,a+n);int pos;
	for(int i=0;i<n-1;i++)
	{
		if(pos=binary_search(a,i+1,n-1,sum-a[i]))
		{
			cout<<"pair found"<<a[i]<<"  "<<a[pos];
		}
	}
return 0;

}
