#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
	char a[1000];
	cin.getline(a,1000);
	int i=0;
	int j=1;
	while(j<strlen(a))
	{
		if(a[i]==a[j])
			j++;
		else
		{
			i++;
			a[i]=a[j];
			j++;
		}
	}
	a[i+1]='\0';
	cout<<a;
}