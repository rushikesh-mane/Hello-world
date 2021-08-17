#include<iostream>
using namespace std;

void sub_arrays(int a[],int n)
{

	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			for(int k=i;k<=j;k++)
			{
				cout<<a[k]<<"  ";
			}
			cout<<"\n";
		}
		
		
	}
	
}
int main()
{
	int a[5]={5,4,3,2,1};
	sub_arrays(a,5);
	
}
