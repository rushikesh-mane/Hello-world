#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<climits>
using namespace std;

 int  knapsack_0_1(int *weight,int *price,int cap,int n)
{
    if(n==0 || cap==0)
    {
        return 0;
    }
    int inc=0,exc=0,ans=0;
    if(cap>=weight[n-1])
    {
        inc=price[n-1]+knapsack_0_1(weight,price,cap-weight[n-1],n-1);
    }
    exc=knapsack_0_1(weight,price,cap,n-1);
    ans=max(inc,exc);
    return ans;
}
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
    int weight[n]={1,2,3,4};
    int price[n]={40,20,30,100};

    int cap=7;
    cout<<knapsack_0_1(weight,price,cap,n);
   
}




