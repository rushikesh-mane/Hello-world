//problem from codechef may 2020 challenge 
#include<iostream>
#include <cmath>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input1.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

	long t;
	cin>>t;
	long double x,y,l,r;

	for (int j = 0; j < t; ++j)
	{
		cin>>x>>y>>l>>r;
		if(l==0)
		{
			l=1;
		}
		long double largest=max(x,y);
		int maxlog=(int)log2(largest);
		int lg=(int)log2(l);
		int end=(int)log2(r);
		lg++;long double mp=0,cp;
		for(;lg<=end && lg<maxlog;lg++)
		{

		
		}
		long double result;
		if(lg==maxlog)
			 result=pow(2,lg+1)-1;
		else
			 result=pow(2,lg)-1;

		cout<<result<<"\n";
	}
	
		
}
