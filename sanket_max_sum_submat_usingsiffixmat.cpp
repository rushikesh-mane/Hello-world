//display all the sub matrices of the matrix #include<iostream>

//find the summarix with the maximum sum using O(n2) this technique make the use ofsuffix matrix 
#include<iostream>
using namespace std;
#include<limits.h>
void max_sum(int **a,int n)
{
	for(int i=n-1;i>=0;i--)
		for(int j=n-2;j>=0;j--)
		{
			a[i][j]=a[i][j]+a[i][j+1];
		}
		for(int i=n-2;i>=0;i--)
		for(int j=n-1;j>=0;j--)
		{
			a[i][j]=a[i][j]+a[i+1][j];
		}
		int result=INT_MIN;
		for(int i=n-1;i>=0;i--)
		for(int j=n-1;j>=0;j--)
		{
			result=max(result,a[i][j]);
		}
		cout<<result;
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
		max_sum(a,n);
		
		
}
