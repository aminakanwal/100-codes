//12345
// 2345
//  345
//   45
//    5
#include<iostream>
using namespace std;
int main()
{
	int n=5;
	for (int i=1;i<=n;i++)
	{
	for(int j=1;j<=n;j++)
	{
	if(i<=j)
	cout<<j;
	else
	cout<<" ";
	}
	cout<<endl;
	}
	return 0;
}