#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<climits>
using namespace std;
int ans=0;
 void  count_no_strings(char str[],int n,int i)
{
    if(i==n)
    {
        str[i]='\0';
        cout<<str<<"\n";
        ans++;
        return ;

    }
    if(str[i-1]=='0')
    {
         str[i]='1';
       count_no_strings(str,n,i+1);
         str[i]='0';
        count_no_strings(str,n,i+1);
    }
    else
    {
        str[i]='0';
        count_no_strings(str,n,i+1);
    }
   
    
}
int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input1.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    int n,cnt=0;
    cin>>n;
    char str[100];
    // for strings stating with 1
    str[0]='1';
    //int no_of_ways=
    count_no_strings(str,n,1);

 // for strings stating with 0
    str[0]='0';
   
   // no_of_ways+=
    count_no_strings(str,n,1); 
   // cout<<no_of_ways;
    cout<<"\n"<<ans;
}




