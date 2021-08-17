#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<climits>
using namespace std;
 void replace_by_pi(char str[],int i)
{
    if(str[i]=='\0' || str[i+1]=='\0')
        return ;
    if(str[i]=='P' and str[i+1]=='i')
    {
        int j=i;
        while(str[j]!='\0')
            j++;
        while(j!=i+1)
        {
            str[j+2]=str[j];
            j--;
        }
        str[i]='3';
        str[i+1]='.';
        str[i+2]='1';
        str[i+3]='4';
        replace_by_pi(str,i+4);
    }
    else
    {
        replace_by_pi(str,i+1);
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
    char str[100];
    cin>>str;
    replace_by_pi(str,0);
    cout<<str;
}




