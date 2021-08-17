
#include<iostream>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input1.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin>>a[i][j];
		}
	}
	if(n==1 && m==1)
		{
			cout<<a[0][0]<<", END";
			return 0;
		}
	int sc=0,ec=m-1,sr=0,er=n-1;
	while(sc<=ec)
	{
		for(int i=sr;i<=er;i++)
		{
			cout<<a[i][sc]<<", ";
		}
		if(sr<=er){
			for(int i=sc+1;i<=ec;i++)
			{
				cout<<a[er][i]<<", ";
			}
		}
		if(sc<ec){
			for(int i=er-1;i>=sr;i--)
			{
				cout<<a[i][ec]<<", ";
			}
		}
		for(int i=ec-1;i>sc;i--)
		{
			cout<<a[sr][i]<<", ";
		}
		sr++;sc++;ec--;er--;
	}
	cout<<"END";
}
