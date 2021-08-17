#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	cin>>str;
	int n=str.length();
	for(int i=0;i<n;i++)
	{
		int cnt=1;
		cout<<str[i];
		while(str[i]==str[i+1] && i<n-1)
		{
			cnt++;
			i++;
		}
		cout<<cnt;
	}
	return 0;
}