//generate the all prime no.s in the range 0 t0 n
#include<iostream>
#include<algorithm>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
vector<long long int> prime_sieve(bool*p,long long int n)
{
	for(long long int i=3;i<=n;i+=2)
	{
		p[i]=1;//mark all odd no.s as prime 
	}

	for(long long int i=3;i<=n;i+=2)
	{
		if(p[i]==1){
		for(long long int  j=i*i;j<=n;j+=i)
		p[j]=0;
		}
	}
	p[1]=p[0]=0;
	p[2]=1;
	vector<long long int>primes;
	primes.push_back(2);
	for(long long int i=3;i<=n;i+=2)
	{
		if(p[i]==1)
		{
			primes.push_back(i);
		}
	}
	return primes;
}
int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	long long int n;
	cin>>n;
	bool *p=new bool[n+1];
	vector<long long int>primes= prime_sieve(p,n);
	for(long long int i=0;i<primes.size();i++)
	{
		cout<<primes[i]<<"  ";
	}
	return 0;
}