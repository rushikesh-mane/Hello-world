#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<climits>
using namespace std;
void write_in_words(int n)
{
    if(n==0)
        return;
    int digit=n%10;
    write_in_words(n/10);
    switch(digit)
    {
        case 1:
        cout<<"one ";
        break;
        case 2:
        cout<<"two ";
         break;
        case 3:
        cout<<"three ";
         break;
        case 4:
       cout<<"four ";
        break;
        case 5:
       cout<<"five ";
        break;
        case 6:
       cout<<"six ";
        break;
        case 7:
       cout<<"seven ";
        break;
        case 8:
       cout<<"eight ";
        break;
        case 9:
       cout<<"nine ";
        break;
        case 0:
       cout<<"zero ";
        break;
    }
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
    write_in_words(n);
   
}




