#include <iostream>
#define ll long long 
using namespace std;

int main(){
     #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input1.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
   int t;
   cin>>t;
	for(int k=0;k<t;k++)
	{
		long n;
		ll a[n];
		float bit_cnt[32];
		for(long int i=0;i<n;i++)
		{
			cin>>a[i];
			int j=0;
			while(a[i])
			{
				int last_bit=a[i]&1;
				cout<<last_bit;
				if(last_bit)
				{
					bit_cnt[j]+=1;
				}
				j++;
				a[i]>>=1;
			}
			
			cout<<a[i]<<"\n";
			for(int s=0;s<32;s++)
			{
				cout<<bit_cnt[s]<<" ";
			}
		}
		for(long i=0;i<32;i++)
		{
			bit_cnt[i]/=n;
		}
		float maxi=bit_cnt[0];
		int pos=0;
		
		for(long i=0;i<32;i++)
		{
			if(maxi<bit_cnt[i])
			{
				pos=i;
				maxi=bit_cnt[i];
			}
		}
		
	  cout<<pos<<"\n";
	}
}