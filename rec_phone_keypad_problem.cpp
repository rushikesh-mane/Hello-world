#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<climits>
using namespace std;
char a[][10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void generate_names(char*in,char*out,int i,int j)
{
    if(in[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<"\n";
        return;
    }
    int digit=in[i]-'0';
    //skip the digit or 1 
    if(digit==0 || digit==1)
        generate_names(in,out,i+1,j);
    for(int k=0;a[digit][k]!='\0';k++)
    {
        out[j]=a[digit][k];
        generate_names(in,out,i+1,j+1);
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
    char in[20];
    cin>>in;
    in[n]='\0';
    char out[30];
   generate_names(in,out,0,0);
   
}




