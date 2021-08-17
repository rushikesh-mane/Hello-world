#include<iostream>
using namespace std;
int main()
{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int j=0;
	int n=3;
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			while(j<n)
			{
				cout<<a[j][i]<<"  ";
				j++;
			}
			j--;
		}
		else
		{
			while(j>=0)
			{
				cout<<a[j][i]<<"  ";
				j--;
			}
			j++;
		}
	}
}
