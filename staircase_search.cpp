#include<iostream>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
	int a[4][4],k=1;
	int n=4;
	for(int i=0;i<n;i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin>>a[i][j];
		}
	}
	int j=3;
	int i=0;
	int key=17;
	int flag=0;
	while(j>=0 && i<=3)
	{
		if(a[i][j]==key)
		{
			cout<<"\nelement found";
			flag=1;
			break;
		}
		else if(a[i][j]>key)
		{
			j--;
		}
		else
		{
			i++;
		}
	}

if(flag==0)
{
	cout<<"element not found";
}

	return 0;

}
