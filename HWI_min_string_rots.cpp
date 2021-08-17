#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<climits>
using namespace std;
string rotate(string str,int n)
{
    reverse(str.begin(),str.begin()+n);
    reverse(str.begin()+n,str.end());
    reverse(str.begin(),str.end());
    return str;
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
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    map<string,pair<int,int>>p;
     for(int i=0;i<n;i++)
    {
        if(p.find(s[i])!=p.end())
        {
            auto it=p.find(s[i]);
            (*it).second.first+=1;
        }
         else
         {
             p.insert({s[i],pair<int,int>{1,0}});
         }
    }
    int cnt=0;int flag=0;
    for(auto it=p.begin();it!=p.end();it++)
   {
        string str=(*it).first;
        int len=str.length();
        for(int j=1;j<len;j++)
        {
            string str2=rotate(str,j);
            if(str2==str)
            {
                flag=1;
                break;
            }
            if(p.find(str2)!=p.end())
            {
                auto itr=p.find(str2);
                (*itr).second.second=((*itr).second.second)+j;
            }
        }
   }
   
    long ans=INT_MAX;
    for(auto it=p.begin();it!=p.end();it++)
   {
        if(ans>(*it).second.second)
        {
            ans=(*it).second.second;
        }
       cout<<(*it).first<<"  "<<(*it).second.first<<"  "<<(*it).second.second<<"\n";
   }
    if(ans==0 && flag==0)
    {
        cout<<"-1";
    }
    else
    {
        cout<<ans;
    }
    cout<<"\n";
}




