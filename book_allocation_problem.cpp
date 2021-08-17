//problem based on binary serach in which we have to find monotonic search space and find the answer 
//URL https://www.spoj.com/problems/AGGRCOW/
#include<iostream>
#include <algorithm>
using namespace std;
bool isPossible(int a[],int n,int m,int curr_min)
{
	int student=1;
	int pages_reading=0;
	for(int i=0;i<n;i++)
	{
		if(pages_reading+a[i]>curr_min)
		{
			student++;
			pages_reading=a[i];
			continue;
		}
		pages_reading=pages_reading+a[i];

	}
	if(student>m)
	{
		return false;
	}
	return true;

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
		int n,no_of_students;
		cin>>n;
		cin>>no_of_students;
		int a[n];
		int t_pgs=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			t_pgs=t_pgs+a[i];

		}
		
		int s=a[n-1];
		int ans;
		int e=t_pgs;
		while(s<=e)
		{
			int mid=(s+e)/2;
			if(isPossible(a,n,no_of_students,mid))
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