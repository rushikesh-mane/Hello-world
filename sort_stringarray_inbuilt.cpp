#include<iostream>
#include<bits/stdc++.h>

#include<string.h>
using namespace std;
//comparator for comparing the string based on lengths of strings 
bool compare(string a,string b)
{
	if(a.length()==b.length())
	{
		return a<b;
	
	}
	return a.length()>b.length();
}
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
	string a[100];
	cin.get();
	for(int i=0;i<n;i++)
	{
		getline(cin,a[i]);

	}

	sort(a,a+n,compare);
	//first wat to display string 
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\n";
	}
	//second way
	/*for(int i=0;i<n;i++){
	for(auto it=a[i].begin();it<a[i].end();it++)
	{
		cout<<*it;
	}
	cout<<"\n";
}*/
	//third way 
	/*for(int i=0;i<n;i++)
	{
		for(auto c:a[i])
		{
			cout<<c;
		}
		cout<<"\n"	
	}*/
	
return 0;

}