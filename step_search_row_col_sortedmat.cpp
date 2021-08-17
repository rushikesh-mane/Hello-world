//display all the sub matrices of the matrix #include<iostream>

//find the summarix with the maximum sum using O(n2) this technique make the use ofsuffix matrix 
#include<iostream>
using namespace std;
#include<limits.h>
void step_search(int **a,int n,int key)
{
	for(int i=0;i<n;i++)
		for(int j=n-1;j>=0;j--)
		{
			if(a[i][j]==key)
			{
				cout<<1;
				return;
			}
		}
		cout<<0;
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
	int **a=new int*[n];
	for(int i=0;i<n;i++)
	{
		a[i]=new int[n];
	}
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
		int key;
		cin>>key;
		step_search(a,n,key);
		
		
}
