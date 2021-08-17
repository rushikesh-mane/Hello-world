#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<climits>
using namespace std;
int uppper_bound(int a[],int n,int key)
{
    if(n==0)
    {
        return -1;
    }
    if(a[n-1]==key)
        return n;
    return uppper_bound(a,n-1,key);
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
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;
    if(uppper_bound(a,n,key)==-1)
    {
        cout<<"element is not available";
    }
    else
    {
    cout<<"elements is found at index "<<uppper_bound(a,n,key)-1;
    }
   
}




