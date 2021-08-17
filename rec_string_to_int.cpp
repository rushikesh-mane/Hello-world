#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<climits>
using namespace std;
int string_to_int(string str,int i,int n,int ans)
{
    if(i==n)
        return ans;
    int digit=str[i]-'0';
    ans=ans*10+digit;
    return string_to_int(str,++i,n,ans);
    
   
}
int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input1.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    string str;
    cin>>str;
    int n=str.length();
    int ans=0;
    ans=string_to_int(str,0,n,ans);
   cout<<ans;
}




