//when we are given n no of queries we should use sieve based 
//approach to calculate the prime factors 
#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;
vector<int> prime_sieve(int p[],int n)
{
	for(long long i=3;i<=n;i+=2)
	{
		p[i]=1;//mark all odd no.s as prime 
	}

	for(long long i=3;i<=n;i+=2)
	{
		if(p[i]==1){
		for(long long j=i*i;j<=n;j+=i)
		p[j]=0;
		}
	}
	p[1]=p[0]=0;
	p[2]=1;
	vector<int>primes;
	for(int i=0;i<=n;i++)
	{
		if(p[i]==1)
		{
			primes.push_back(i);
		}
	}
	return primes;
}
vector<int> factor(int n,vector<int>&primes)
{
	vector<int>fact;
	int p=primes[0];
	int i=0;
	while(p*p<=n)
	{
		if(n%p==0)
		{
			while(n%p==0)
			{
				n=n/p;
			}
			fact.push_back(p);
		}
		i++;
		p=primes[i];
	}
	if(n!=1)
	{
		fact.push_back(n);
	}
	return fact;
}
int main()
{
    // for getting input from input.txt
	#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	int n=100000;
	int t;
	cin>>t;
	int p[n+1]={0};
	vector<int>primes=prime_sieve(p,n);
	for(int i=0;i<t;i++)
	{
		int num;
		cin>>num;
		vector<int>fact=factor(num,primes);
		for(auto f:fact)
		{
			cout<<f<<"  ";
		}

		cout<<"\n";
	}
	
}