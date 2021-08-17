#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    long n;
    cin>>n;
    long long a[n];
    for(long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    long long prefix_sum[n]={0};
    prefix_sum[0]=a[0];
    for(long i=1;i<n;i++)
    {
        prefix_sum[i]=prefix_sum[i-1]+a[i];
    }
    int i;
    for( i=0;i<n;i++)
    {
       if(prefix_sum[i]<(prefix_sum[n-1]-prefix_sum[i]))
           continue;
        else
            break;
        
    }
   
    cout<<(n-i);
    return 0;
}




