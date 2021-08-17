
//when we are given n no of queries we should use sieve based 
//approach to calculate the prime factors 

#include<iostream>
#include <algorithm>
#include<vector>
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
int factor(long long int n,long long int m,vector<long long int>&primes)
{
	
	long long int p=primes[0];
	long long int i=0;
    int cnt=0;
	while(p*p<=n)
	{
		if(n%p==0)
		{
            if(p>=m)
            {
                cnt=-1;
                return cnt;
            }
			while(n%p==0 && n>1)
			{
				n=n/p;
                cnt++;
			}
			
		}
		i++;
		p=primes[i];
	}
	if(n!=1)
	{
		cnt++;
	}
	return cnt;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
	
	long long int n=1000000;
	bool *p=new bool[n+1];
	vector<long long int>primes= prime_sieve(p,n);
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
		long long int x,y,m;
        cin>>x>>y>>m;
        long long int common_floor=__gcd(x,y);
        long long int  distance_x=x/common_floor;
        long long int distance_y=y/common_floor;
		
        int fact1=factor(distance_x,m,primes);
        int fact2=factor(distance_y,m,primes);
		if(fact1!=-1 && fact2!=-1)
        	cout<<fact1+fact2<<" "<<common_floor<<"\n";
        else
            cout<<"-1\n";
	}
	
}



