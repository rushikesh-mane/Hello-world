#include<iostream>
#include<bits/stdc++.h>

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
	
	vector<int> primes;
	vector<int> v;
	
	for (int i = 0; i <=n; i=i++)
	{
		/* code */
		v.push_back(i);

	}
	v[1]=0;

	for (int i = 3; i*i < v.size(); i+=2)
	{
		
			for(int j=i*i+v[i];j<n;j+=2)
			{
				if(v[j]%v[i]==0 && v[j]!=0)
				{
					v[j]=0;
				}
			}
	}
	primes.push_back(2);
for (int i = 3; i < v.size(); i+=2)
{
	if(v[i]!=0)
		primes.push_back(v[i]);
}
for (int i = 0; i < primes.size(); ++i)
{
	/* code */cout<<primes[i]<<"  ";
}
	return 0;

}