#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<climits>
using namespace std;
int ans=0;
 int count(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    if(n==2)
    {
        return 2;
    }
    int ans1=count(n-2);
    ans+= (count(n-1)) + ((n-1)* ans1);
   
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
    int n;
    cin>>n;
    int no_of_ways=count(n);
    cout<<no_of_ways;
}




