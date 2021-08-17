
#include<iostream>
#include<algorithm>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void prime_sieve(bool*p,long long int n)
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
}
int isspecial(long ans,int r1,int r2,long cumsum[])
{
   int A=cumsum[ans];
    float p1=(float)A/ans;
    float p2=(float)r1/r2;
    cout<<"p1 "<<p1<<"p2 "<<p2<<"  ";
    if(p1>=p2)
    {
        return A;
    }
    else
    {
        return 0;
    }
}
int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input1.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    bool *p=new bool[100005+1];
	prime_sieve(p,100006);
    long cumsum[100006]={0};
    for(long i=1;i<100006;i++)
    {
        cumsum[i]=cumsum[i-1]+p[i];
    }
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        int r1,r2;
        cin>>r1>>r2;
        long n;
        cin>>n;
        string str;
        cin>>str;
        string str1=" ";
        str1=str1+str;
        long ans=1;
       //cout<<ans<<"  ";
        int steps=0;
        while(ans<n)
        {
            int A=isspecial(ans,r1,r2,cumsum);
            cout<<A<<" ";
            if(A!=0 && str1[ans+A]!='*')
            {
                ans=ans+A;
            }
            else if(str1[ans+2]!='*')
            {
                ans=ans+2;
            }
            else if(str1[ans+1]!='*')
            {
                ans=ans+1;
            }
             else
             {
                 break;
             }
            steps++;
            cout<<"ans"<<ans<<" "<<steps<<" "<<"\n";
         }
        if(ans>=n && str[ans]!='*')
        {
            cout<<steps<<"\n";
        }
        else
        {
            cout<<"Not possible\n";
        }
    }
}



