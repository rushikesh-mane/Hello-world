#include<iostream>
using namespace std;

void bubble_sort(int a[],int n)
{

	for(int itr=0;itr<n-1;itr++)
	{
		for(int j=0;j<(n-itr-1);j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
			}
		}

		
	}
	
}
int main()
{
	int a[5]={5,4,3,2,1};
	bubble_sort(a,5);
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<",";
	}
}
