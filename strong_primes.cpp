#include<iostream>
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
    long long int prev=2,middle=3;
    for(long long int i=5;i<=n;i+=2)
    {
        if(p[i]==1)
        {
            long long int mean=prev+i;
            mean/=2;
            if(middle>mean)
            primes.push_back(middle);
            prev=middle;
            middle=i;
        }
    }
    return primes;
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
    long long int  strong_primes=0;
    
    for(int k=0;k<t;k++)
    {
        strong_primes=0;
        long long int  l,r;
        cin>>l>>r;
        if(l%2==0)
        {
            for(long long int i=l+1;i<=r;i+=2)
            {
                if(binary_search(primes.begin(),primes.end(),i))
                {
                    strong_primes++;
                }
            }
        }
        else
        {
            for(long long int i=l;i<=r;i+=2)
            {
                if(binary_search(primes.begin(),primes.end(),i))
                {
                    strong_primes++;
                }
            }
        }
        cout<<strong_primes<<"\n";
    }
}








