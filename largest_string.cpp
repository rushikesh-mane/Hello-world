#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
	int n;
	cin>>n;
	string current,maxi;
	for(int i=0;i<n;i++)
	{
		cin>>current;
		if(i==0)
		{
			maxi=current;
		}
		if(maxi.length()<current.length())
		{
			maxi=current;
		}
	}	
	cout<<maxi;
return 0;

}