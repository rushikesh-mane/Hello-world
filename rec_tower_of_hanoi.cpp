#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<climits>
using namespace std;

 void  tower_of_hanoi(int n,char start,char helper,char dest)
{
    if(n==0)
    {
        return;
    }
    tower_of_hanoi(n-1,start,dest,helper);
    cout<<"moving "<<n<<"  from  "<<start<<"  to  "<<dest<<"\n";
    tower_of_hanoi(n-1,helper,start,dest);
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
    tower_of_hanoi(n,'A','B','C');
   
}




