#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<climits>
using namespace std;
bool binary_search(int a[],int s,int e,int key)
{
    if(s>e)
    {
        return false;
    }
    int mid=(s+e)/2;
    if(a[mid]==key)
    {
        return true;

    }
    else if(key>a[mid])
    {
        s=mid+1;
       binary_search(a,s,e,key);
    }
    else
    {
        e=mid-1;
        binary_search(a,s,e,key);
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
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;
    int s=0,e=n-1;
    if(binary_search(a,s,e,key))
    {
        cout<<"elements is found at index ";
    }
    else
    {
        cout<<"elements is not found";
    }
}




