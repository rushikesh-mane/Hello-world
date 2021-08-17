#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
#include<cstring>
using namespace std;
string tokenizer(string str,int key)
{
	char *ptr=strtok((char*)str.c_str()," ");
	while(key>1)
	{
		ptr=strtok(NULL," ");
		key--;
	}
	return (string)ptr;
}
int string_to_number(string str)
{
	int ans=0;
	for(int i=0;str[i]!='\0';i++)
	{
		ans=ans*10+(str[i]-'0');
	}
	return ans;
}
bool numeric(pair<string,string> a,pair<string,string> b)
{
	int c,d;
	c=string_to_number(a.second);
	d=string_to_number(b.second);
	return c<d;

				
}

bool lexiocompare(pair<string,string> a,pair<string,string> b)
{
	return a.second<b.second;
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
	string a[n];
	cin.get();
	pair<string,string>s[n];
	for (int i = 0; i < n; ++i)
	{
		getline(cin,a[i]);		
	}
	int key;
	string reversal;
	string type;

		cin>>key>>reversal>>type;
	for (int i = 0; i < n; ++i)
	{
		s[i].first=a[i];
		s[i].second=tokenizer(a[i],key);
	}
	if(type.compare("lexicographical")==0)
	{
		sort(s,s+n,lexiocompare);
	}
	else
	{
		sort(s,s+n,numeric);
	}
	
	/*if(reversal.compare("true")==0)
	{
		for(int i=0;i<n/2;i++)
		{
			swap(s[i],s[i-n-1]);
		}
	}
//to display the output 
	for(int i=0;i<n;i++)
	{
		cout<<s[i].first<<"\n";
	}


//this is implementation is using the inbuilt function 

	/*char*ptr=strtok(s," ");
	*/
return 0;

}