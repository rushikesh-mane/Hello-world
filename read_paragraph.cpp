#include<iostream>
using namespace std;
void read_line(char  a[],int max_len,char delimeter )
{
int k=0;
	a[k]=cin.get();
	
	while(a[k]!=delimeter && k!=max_len-1)
	{
		k++;
		a[k]=cin.get();
		
	}
	a[k]='\0';

}
int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
	char a[1000];
	read_line(a,1000,'!');
	cout<<a;
}