#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<climits>
using namespace std;
int merge(int a[],int s,int e)
{
    int cnt=0;
    int mid=(s+e)/2;
    int temp[10000];
    int k=s;
    int i=s;
    int j=mid+1;
    for(;i<=mid && j<=e;)
    {
        if(a[i]>a[j])
        {
            temp[k++]=a[j++];
            cnt=cnt+mid-i+1;
        }
        else
        {
            temp[k++]=a[i++];
        }
    }
    while(i<=mid)
    {
        temp[k++]=a[i++];
    }
    while(j<=e)
    {
        temp[k++]=a[j++];
    }
    
    for(int s=0;s<=e;s++)
    {
        a[s]=temp[s];
    }
    

return cnt;
}
int inversion_count(int a[],int s,int e)
{
    if(s>=e)
        return 0;

  /*  if(n==1)
        return 0;*/
    int mid=(s+e)/2;
    int x=inversion_count(a,s,mid);
   int y= inversion_count(a,mid+1,e);
   int z=merge(a,s,e);
   return x+y+z;

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
   cout<<inversion_count(a,0,n-1);

   
}




