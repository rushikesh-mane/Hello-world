#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
#include<cstring>
using namespace std;
int abt_col;
	string order;
	string type;
std::vector<string> a;
bool compare(string a,string b)
{
	stringstream check1(a);
	 	stringstream check2(b);
	 	int k=1;
	 	string str1,str2;
while(getline(check1, str1, ' ') &&  k!=abt_col) 
    { 
        k++;
    }
    k=1;
    while(getline(check2, str2, ' ') &&  k!=abt_col) 
    { 
        k++;
    } 
 
			if(order.compare("false")==0 && type.compare("lexicographical")==0)
			{
				return str1<str2;
			}
			else if(order.compare("true")==0 && type.compare("lexicographical")==0)
				{
					return str1>str2;
				}
			else if(order.compare("false")==0 && type.compare("numeric")==0)
			{
					stringstream geek(str1); 
					int x = 0; 
    				geek >> x; 
    				stringstream geek1(str2); 
					int x1 = 0; 
    				geek1 >> x1; 
    				return x<x1;

			}
			else
			{
					stringstream geek(str1); 
					int x = 0; 
    				geek >> x; 
    				stringstream geek1(str2); 
					int x1 = 0; 
    				geek1 >> x1; 
    				return x>x1;
			}

				
}

int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	

	int n;
	cin>>n;
	//string a[n];
	cin.get();
	string str;
	for (int i = 0; i < n; ++i)
	{
		getline(cin,str);
		
		a.push_back(str);
	}
		cin>>abt_col>>order>>type;
	
	
		
		sort(a.begin(),a.end(),compare);
	
//to display the output 
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\n";
	}


//this is implementation is using the inbuilt function 

	/*char*ptr=strtok(s," ");
	*/
return 0;

}