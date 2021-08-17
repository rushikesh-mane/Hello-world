#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<climits>
using namespace std;

 void  string_subsequences(char *in,char*out,int i,int j)
{
    if(in[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<"\n";
        return;
    }
    out[j]=in[i];
    //char ch=str[i];
string_subsequences(in,out,i+1,j+1);
string_subsequences(in,out,i+1,j);
}
int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input1.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    char in[]="abc";
    char out[10];
    string_subsequences(in,out,0,0);
   
}




