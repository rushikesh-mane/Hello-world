#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<climits>
using namespace std;

 void  generate_brackets(int n,char *out,int idx,int open,int close)
{
    if(idx==2*n)
    {
        out[idx]='\0';
        cout<<out<<"\n";
        return;
    }
    
    if(open<n){
        out[idx]='(';
        
        generate_brackets(n,out,idx+1,open+1,close);
    }
    if(close<open){
        out[idx]=')';
        
        generate_brackets(n,out,idx+1,open,close+1);
    }

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
    char out[100];
    int idx=0;
    int open=0,close=0;
    generate_brackets(n,out,idx,open,close);
   
}




