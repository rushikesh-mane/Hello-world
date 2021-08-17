#include<iostream>
using namespace std;

void insertion_sort(int a[],int n)
{

	for(int i=1;i<n;i++)
	{
		int j=i-1;
		int element=a[i];
		while(element<a[j] && j>=0)
		{
			a[j+1]=a[j];
			j--;	
		}
		a[j+1]=element;

		
	}
	
}
int main()
{
	int a[5]={5,4,3,2,1};
	insertion_sort(a,5);
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<",";
	}
}
