#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<climits>
using namespace std;
void bubble_sort(int a[],int n)
{
    if(n==0)
        return;
    if(a[0]>a[1])
        swap(a[0],a[1]);
    bubble_sort(a+1,n-1);
    bubble_sort(a,n-1);

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
   bubble_sort(a,n);

   for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
    
}




