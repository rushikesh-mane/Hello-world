#include<iostream>
using namespace std;
int binary_search(int a[],int n,int key)
{
	int start=0,end=n-1,mid;
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
	return -1;
}
int main()
{
	int a[5]={1,2,3,4,5};
	cout<<binary_search(a,5,4);
}
