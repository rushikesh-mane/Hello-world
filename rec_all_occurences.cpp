#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<climits>
using namespace std;
int all_occurences(int a[],int n,int key,int size,int cnt)
{
    if(n==0 && cnt==0)
    {
        return -1;
    }
    if(n==0 && cnt!=0)
    {
        return cnt;
    }
    if(a[0]==key)
    {
        cout<<"\nelements is found at index "<<size-n;
        cnt++;
    }
    return all_occurences(a+1,n-1,key,size,cnt);
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
    int a[n];
    int size=n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;
    int cnt=0;
    if(all_occurences(a,n,key,size,cnt)==-1)
    {
        cout<<"element is not available";
    }
   
   
}




