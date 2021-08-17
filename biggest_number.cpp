
#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
bool compare(string x,string y)
{
	
	string xy=x.append(y);
	string yx=y.append(x);
	return xy.compare(yx) > 0 ? 1: 0; 
}
int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		int n;
		cin>>n;
		vector<string>v;
		for(int j=0;j<n;j++)
		{
			string str;
			cin>>str;
			v.push_back(str);
		}
		sort(v.begin(),v.end(),compare);
		for(int i=0;i<v.size();i++)
		{
			cout<<v[i];
		}
		cout<<"\n";
	}
}
