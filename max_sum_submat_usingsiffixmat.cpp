//display all the sub matrices of the matrix #include<iostream>

//find the summarix with the maximum sum using O(n2) this technique make the use ofsuffix matrix 
#include<iostream>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input1.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;
	int a[n+2][n+2];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
		int csum=0,msum=0;
		int suffix_sum[n+2][n+2];
		for(int i=0;i<=n+1;i++)
		{
			for(int j=0;j<=n+1;j++)
			{
				suffix_sum[i][j]=0;
			}
		}
			//for row sum
		for(int i=n;i>=1;i--)
		for(int j=n;j>=1;j--)
		{
			
			suffix_sum[i][j]=suffix_sum[i][j+1]+a[i][j];			
							
		}
		
		//for column sum 
		for(int i=n-1;i>=1;i--)
		for(int j=n;j>=1;j--)
		{
			
			csum=suffix_sum[i][j]=suffix_sum[i+1][j]+suffix_sum[i][j];
			if(csum>msum)
			{
				msum=csum;
			}			
							
		}
		cout<<msum;
		
		
}
