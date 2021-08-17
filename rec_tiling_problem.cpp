#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<climits>
using namespace std;
 int place_tiles(int n)
{
    if(n<=3)
    {
        return 1;
    }
   return place_tiles(n-1)+place_tiles(n-3);
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
    int no_of_ways=place_tiles(n);
    cout<<no_of_ways;
}




