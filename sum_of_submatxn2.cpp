//display all the sub matrices of the matrix #include<iostream>
#include<iostream>
using namespace std;
int main()
{
	/*#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input1.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
*/
	int n;
	cin>>n;
	int a[n+1][n+1];
	int sum=0;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
			sum+=a[i][j]*i*j*(n-i+1)*(n-j+1);
		}
		
		
		cout<<sum;
}
