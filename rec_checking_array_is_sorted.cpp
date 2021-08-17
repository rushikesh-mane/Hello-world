#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<climits>
using namespace std;
bool is_sorted(int a[],int n)
{
    if(n==0||n==1)
    {
        return true;
    }
    if(a[0]<a[1] and is_sorted(a+1,n-1))
    {
        return true;
    }
    return false;
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
    if(is_sorted(a,n))
    {
        cout<<"array is sorted";
    }
    else
    {
        cout<<"array is not sorted";
    }
}




