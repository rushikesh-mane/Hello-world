#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std ;
int main()
{
	/*#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input1.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif*/
	int n;
	cin>>n;
	vector<int> v;
	v.push_back(1);
	int carry;
	for(int j=2;j<=n;j++)
	{
		int carry=0;
		for (int i = 0; i <v.size(); ++i)
		{
			
			long ans=((v[i])*j)+carry;
			v[i]=ans%10;
			carry=ans/10;
		}
		if(carry!=0){
			if(carry>=10)
			{
				while(carry>0){
					int p=carry%10;
					v.push_back(p);
					carry=carry/10;
				}
				
				
			}
			else{
				v.push_back(carry);
			}
			
		}
		
	}
	for(int i=v.size()-1;i>=0;i--)
	{
		cout<<v[i];
	}
}