#include<iostream>
#include <algorithm>
using namespace std;
bool compare(int a,int b)
{
	return a<=b;
}
int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input1.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	int amt;
	cin>>amt;
	int a[10]={1,2,5,10,20,50,100,200,500,2000};
	int n=10;
	while(amt>0)
	{
		auto it=lower_bound(a,a+n,amt,compare);
		int lb=it-a-1;
		cout<<a[lb]<<", ";
		amt-=a[lb];
	}
	return 0;
}