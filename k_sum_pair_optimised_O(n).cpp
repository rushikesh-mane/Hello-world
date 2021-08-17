//O(nlogn) searching sum-a[i] in the remaining array using bianry search 
#include<bits/stdc++.h>
using namespace std ;

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
	sort(a,a+n);
	
	for(int i=0,j=n-1;i<j;)
	{
		if(a[i]+a[j]==sum)
		{
			cout<<"pair "<<a[i]<<"and "<<a[j]<<"\n";
			i++;
			j--;
		}
		else if(a[i]+a[j]>sum)
		{
			j--;
		}
		else
		{
			i++;
		}
	}
return 0;

}
