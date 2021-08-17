#include<iostream>
using namespace std;
int getmax(int x,int y,int z)
{
    if(x>y && x>z)
        return x;
    else if(y>x && y>z)
        return y;
    else
        return z;
}
int maxgold(int **arr,int r,int c,int m,int n)
{
    if(c>=n)
        return 0;
    if(r<0 || r>=m)
        return 0;
    int x=maxgold(arr,r-1,c+1,m,n);
    int y=maxgold(arr,r,c+1,m,n);
    int z=maxgold(arr,r+1,c+1,m,n);
    return arr[r][c]+getmax(x,y,z);
}
int main()
{
    int t;
    cin>>t;
    for(int z=0;z<t;z++)
    {
        int n,m;
        cin>>m>>n;
        int **a;
        a=new int*[m];
        for(int i=0;i<m;i++)
        {
            a[i]=new int[n];
        }
       
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        int cost=0;
        for(int i=0;i<m;i++)
        {
            cost=max(cost,maxgold(a,i,0,m,n));
        }
        cout<<cost<<"\n";
    }
}




