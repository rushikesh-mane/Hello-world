#include<iostream>
#include<string.h>
#include<cstring>
#include<bits/stdc++.h>
#include<vector>
#include<climits>
using namespace std;
vector<string> tokenization(string str)
{   
    vector<string>tokens;
    char*ptr=strtok(((char*)str.c_str())," ");
    string s;
    tokens.push_back(s);
    do
    {
         s=(string)ptr;
         tokens.push_back(s);
        ptr=strtok(NULL," ");
        
    }while(ptr!=NULL);
    return tokens;
}
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
    
    for(int k=0;k<t;k++)
    {
        string sentence;
        cin.get();
        getline(cin,sentence);
        vector<string>tokens=tokenization(sentence);
        vector<string>copytokens(tokens);
        for(int i=0;i<tokens.size();i++)
        {
            int len=tokens[i].length();
            if(tokens[i][len-1]=='.')
            {
                tokens[i]=tokens[i].substr(0,len-1);
            }
           
        }
        int n;
        cin>>n;
       
       map<string, int> mpp;
        string seed[n];
        for(int i=0;i<n;i++)
        {
            cin>>seed[i];
            mpp.insert({seed[i],-1});
        }
        int count=0;
        
        int len_sub=INT_MAX,local_start=0,local_end=0;
        
        for(int i=0;i<tokens.size();i++)
        {
           
            if(mpp.find(tokens[i]) != mpp.end())
            {
                 int index = mpp[tokens[i]]; 
                if (index == -1) 
                    count++; 

                mpp[tokens[i]]=i;

                    if (count == n) 
                    { 
      
                        // Find smallest index 
                        int min = INT_MAX; 
                        for (int j=0;j<n;j++) 
                        { 
                            int val = mpp[seed[j]]; 
                            if (val < min) 
                                min = val; 
                        } 
      
                        // Check if current length is smaller 
                        // then length so far 
                        int s = i - min; 
                        if (s < len_sub) { 
                            local_start = min; 
                            local_end = i; 
                            len_sub=s; 
                        } 


                    }
            }
        }

        //cout<<len_sub<<"\n";
        //cout<<local_start<<"  "<<local_end;
        for(int j=local_start;j<=local_end;j++)
        {
            cout<<copytokens[j]<<" ";
        }
        cout<<"\n";
    }
}




