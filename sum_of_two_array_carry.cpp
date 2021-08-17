#include<iostream>
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
	int m;
	cin>>m;
	int b[m];
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
	}
	if(n>m)
	{
			int sum[n]={0};
			int carry=0;
			for(int i=n-1,j=m-1;i>=0 ;i--,j--)
			{
				if(j>=0){
				sum[i]=(a[i]+b[j]+carry)%10;
				carry=(a[i]+b[j]+carry)/10;
				}
				else
				{
					sum[i]=(a[i]+carry)%10;
					carry=(a[i]+carry)/10;
				}
			}
			if(carry!=0)
			cout<<carry<<", ";
			for(int i=0;i<n;i++)
			{
				cout<<sum[i]<<", ";
			}
			cout<<"END";
	}
	else
	{
		int sum[m]={0};
			int carry=0;
			for(int i=m-1,j=n-1;i>=0 ;i--,j--)
			{
				if(j>=0){
				sum[i]=(a[j]+b[i]+carry)%10;
				carry=(a[j]+b[i]+carry)/10;
				}
				else
				{
					sum[i]=(b[i]+carry)%10;
					carry=(b[i]+carry)/10;
				}
			}
			if(carry!=0)
			cout<<carry<<", ";
			for(int i=0;i<m;i++)
			{
				cout<<sum[i]<<", ";
			}
			cout<<"END";
	}
	return 0;
}