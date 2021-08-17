#include<iostream>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input1.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long n;
        cin>>n;
        long *a =new long[n];
        for(long j=0;j<n;j++)
        {
            cin>>a[i];
        }
        long *candy=new long[n];
        long j;
        for(j=0;j<n;j++)
        {
            candy[j]=1;
        }
        for(j=1;j<n-1;j++)
        {
            if(a[j]>a[j-1] || a[j]>a[j+1])
            {
                candy[j]=candy[j]+max(candy[j-1],candy[j+1]);
            }
        }
        if(a[0]>a[1])
        {
            candy[0]=candy[0]+candy[1];
        }
        if(candy[n-1]>candy[n-2])
            candy[n-1]+=candy[n-2];
        
        long long int sum=0;
        for(long j=0;j<n;j++)
        {
            cout<<candy[j]<<" ";
            sum+=candy[j];
        }
        cout<<"\n"<<sum<<"\n";
    }
}




