#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<climits>
using namespace std;
void merge(int *a,int s,int e)
{
    int mid=(s+e)/2;
    int k=s;
    int temp[100];
    int i=s,j=mid+1;
    for(;i<=mid && j<= e;)
    {
        if(a[i]<a[j])
        {
            temp[k++]=(a[i++]);
        }
        else
        {
             temp[k++]=(a[j++]);
        }
    }
    while(i<=mid)
    {
        temp[k++]=(a[i++]);
    }
    while(j<=e)
    {
        temp[k++]=(a[j++]);
    }
    for(int i=s;i<=e;i++)
    {
        a[i]=temp[i];
    }

}
void merge_sort(int a[],int s,int e)
{
    if(s>=e)
        return;
    int mid=(s+e)/2;
    merge_sort(a,s,mid);
    merge_sort(a,mid+1,e);

    //merge
    merge(a,s,e);

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
   merge_sort(a,0,n-1);

   for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
    
}




