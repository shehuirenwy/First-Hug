#include <iostream>
using namespace std;
int a[100][100];
int main()
{
	int m,n,b=0;
	cin>>m>>n;
	for(int i=1;i<=m;++i)
	{
		for(int j=1;j<=n;++j)
		  cin>>a[i][j];
	}
		for(int i=1;i<=m;++i)
		for(int j=1;j<=n;++j){
			if(i==0||j==0||i==(m-1)||j==(n-1))
			b+=a[i][j];
		}
		cout<<b<<endl;
		return 0;
}
