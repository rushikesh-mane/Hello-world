#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<climits>
using namespace std;
char a[][10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void generate_string(char*in,char*out,int i,int j,map<int,char>&mpp)
{
    if(in[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<"\n";
        return;
    }
    int digit=in[i]-'0';
    out[j]=mpp[digit];
    generate_string(in,out,i+1,j+1,mpp);

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
    char in[20];
    cin>>in;
    in[n]='\0';
    char out[30];
    map<int,char>mpp;
    for(int i=1;i<=26;i++)
    {
        char ch=96+i;
        mpp.insert({i,ch});
    }
   generate_string(in,out,0,0,mpp);
   
}




