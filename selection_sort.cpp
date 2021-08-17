#include<iostream>
using namespace std;

void selection_sort(int a[],int n)
{
	int minidx;
;
	for(int i=0;i<n-1;i++)
	{
		minidx=i;
		for(int j=i+1;j<n;j++)
		{
			
			if(a[minidx]>a[j])
			{
				minidx=j;
			}
		}
		swap(a[i],a[minidx]);
		
	}
	
}
int main()
{
	int a[5]={5,4,3,2,1};
	selection_sort(a,5);
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<",";
	}
}
