#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std ;
int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input1.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	
	string str;
	cin>>str;
	int p=str[0]-'0';
	if(p!=9)
	{
		if(9-p<p)
		{
			str[0]='0'+9-p;
		}
	}
	for(int i=1;str[i]!='\0';i++)
	{
		p=str[i]-'0';
		if(9-p<p)
		{
			str[i]='0'+9-p;
		}
	}
	cout<<str;
	
}