#include<iostream>
using namespace std;

void sub_arrays(int a[],int n)
{
	int csum=0,msum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			csum=0;
			for(int k=i;k<=j;k++)
			{
				csum=csum+a[k];
			}
			if(msum<csum)
			{
				msum=csum;
			}
			
		}
		
		
	}
	cout<<msum;
	
}
int main()
{
	int a[9]={-4,1,3,-2,6,2,-8,-9,4};
	sub_arrays(a,9);
	
}
