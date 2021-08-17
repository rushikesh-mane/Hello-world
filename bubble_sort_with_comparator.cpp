#include<iostream>
using namespace std;
bool compare(int a,int b){
	return a<b;
}
void bubble_sort(int a[],int n,bool (&cmp)(int a,int b)) 
//passing function as parameter withthe help of function pointers 
{

	for(int itr=0;itr<n-1;itr++)
	{
		for(int j=0;j<(n-itr-1);j++)
		{
			if(cmp(a[j],a[j+1]))
			{
				swap(a[j],a[j+1]);
			}
		}

		
	}
	
}
int main()
{
	int a[5]={5,4,3,2,1};
	bubble_sort(a,5,compare);
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<",";
	}
}
