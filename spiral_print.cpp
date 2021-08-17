#include<iostream>
using namespace std;
int main()
{
	
	int a[3][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
	int n=3;
	int m=5;
	int sr=0,er=n-1,sc=0,ec=m-1;
	while(sr<=er)
	{
		for(int i=sc;i<=ec;i++)
		{
			cout<<a[sr][i]<<"  ";
		}
		if(sc<ec){
		for(int i=sr+1;i<=er;i++)
		{
			cout<<a[i][ec]<<"   ";
		}
	}
		if(sr<er){
		for(int i=ec-1;i>=sc;i--)
		{
			cout<<a[er][i]<<"  ";
		}
		}
		for(int i=er-1;i>sr;i--)
		{
			cout<<a[i][sc]<<"  ";
		}
		sc++;sr++;er--;ec--;
	}
	
}
