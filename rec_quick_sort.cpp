#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<climits>
using namespace std;
int partition(int a[],int s,int e)
{
    int pivot=a[e];
    int i=s-1,j=s;
    for(;j!=e;j++)
    {
         if(a[j]<=pivot) 
         {
            i++;
            swap(a[i],a[j]);

         }
    }
    swap(a[i+1],a[e]);
    return i+1;
}
void  quick_sort(int a[],int s,int e)
{
    if(s>=e)
        return ;
    
    int p=partition(a,s,e);
    quick_sort(a,s,p-1);
   quick_sort(a,p+1,e);
   

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
   quick_sort(a,0,n-1);
   for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }


   
}




