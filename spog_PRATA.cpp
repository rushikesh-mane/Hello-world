//problem based on binary serach in which we have to find monotonic search space and find the answer 
//URL https://www.spoj.com/problems/PRATA/
#include<iostream>
#include <algorithm>
using namespace std;
bool kya_parathe_ho_payenge(int p,int ranking[],int n,int cur_time)
{
	int no_of_parata=0;
	for(int i=0;i<n;i++)
	{
		int k=1;int time=0;
		while(time+k*ranking[i]<=cur_time)
		{
			no_of_parata++;
			
			time=time+k*ranking[i];k++;
		}
		//cout<<no_of_parata<<"   ";
	}
	if(no_of_parata>=p)
		return true;
	else
		return false;
}
int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input1.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		int p;
		cin>>p;
		int no_of_cooks;
		cin>>no_of_cooks;
		int ranking[no_of_cooks];
		for(int i=0;i<no_of_cooks;i++)
		{
			cin>>ranking[i];
		}
		sort(ranking,ranking+no_of_cooks);
		int s=0;
		int e=0;
		for(int i=1;i<=p;i++)
		{
			e=e+i*ranking[no_of_cooks-1];
		}
		//cout<<e<<"\n";
		int ans;
		while(s<=e)
		{
			//cout<<"\n"<<s<<"  "<<e<<"  ";
			int mid=(s+e)/2;
			//cout<<"mid-->"<<mid<<"  ";
			if(kya_parathe_ho_payenge(p,ranking,no_of_cooks,mid))
			{
				ans=mid;
				e=mid-1;
			}
			else
			{
				s=mid+1;
			}
		}
		cout<<ans<<"\n";
	}
	
	return 0;
}