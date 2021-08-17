#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<climits>
using namespace std;
 int count(int n,int k)
{
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }
    int ans=0;
    for(int i=1;i<=k;i++)
    {
        ans+=count(n-i,k);
    }
   return ans;
}
int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input1.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    int n,k;
    cin>>n>>k;
    int no_of_ways=count(n,k);
    cout<<no_of_ways;
}




