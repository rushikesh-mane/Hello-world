#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<climits>
using namespace std;
int ans=INT_MAX;
 void  find_min_path(int **arr,int i,int j,int n,int cur_val)
{
   if(i<n-1 && j==n-1)
   {
        while(i<n)
        {
            cur_val=(cur_val/2)+arr[i][j];
            i++;
        }
        i--;
   }
   if(j<n-1 && i==n-1)
   {
        while(j<n)
        {
            cur_val=(cur_val/2)+arr[i][j];
            j++;

        }
        j--;
   }
   if(i==n-1 && j==n-1)
   {
    ans=min(cur_val,ans);
    return ;
   }
   cur_val=(cur_val/2)+arr[i][j];
find_min_path(arr,i+1,j,n,cur_val);
find_min_path(arr,i,j+1,n,cur_val);
}
int main()
{
   /* #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input1.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif*/
    int **arr;
    int n;
   /* int t;
    cin>>t;*/
  /*  for(int k=0;k<t;k++)
    {*/
        cin>>n;
        arr=new int*[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=new int[n];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>arr[i][j];
            }
        }
        int cur_val=0;
        find_min_path(arr,0,0,n,cur_val);
        cout<<ans<<"\n";
        //ans=INT_MAX;
   // }
   
}




