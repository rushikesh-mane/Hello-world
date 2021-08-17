#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<climits>
using namespace std;
int power(int a,int n)
{
    if(n==1)
    {
        return a;
    }
    int smaller=power(a,n/2);
    return smaller*smaller;
}
int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input1.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    int a,n;
    cin>>a>>n;
    if(n%2==0)
    cout<<power(a,n);
    else
    cout<<a*power(a,n-1);

}
