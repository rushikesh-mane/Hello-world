#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<climits>
using namespace std;
int multiply(int a,int b)
{
    if(b==1)
    {
        return a;
    }
    return a+multiply(a,b-1);
}
int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input1.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    int a,b;
    cin>>a>>b;
    cout<<multiply(a,b);
}




