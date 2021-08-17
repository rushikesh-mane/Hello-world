#include<iostream>
#include <algorithm>
using namespace std;
void search(int a[],int n)
{
	//cout<<"enter key to find";
	int key;
	cin>>key;
	auto it=find(a,a+n,key);
	int idx=it-a;
	if(idx==n)
		cout<<"element not found";
	else
		cout<<"key found at"<<idx<<"index";
}
void binarysearch(int a[],int n)
{
	int key;
	cin>>key;
	auto lb=lower_bound(a,a+n,key);
		cout<<*lb<<"\n";
		auto ub=upper_bound(a,a+n,key);
		cout<<*ub;
	if(binary_search(a,a+n,key))
	{

		cout<<"\nelement present in array at"<<lb-a<<"index";
		cout<<"\noccurence of element is "<<ub-lb;


	}
	else
	{
		cout<<"element not present in array";
	}
}
void permutation(int a[],int n)
{
	int k=6;
	while(k--){
	next_permutation(a,a+n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"  ";
	}
	cout<<"\n";
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
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	//for search
	//search(a,n);
	//binarysearch(a,n);
	permutation(a,n);
}