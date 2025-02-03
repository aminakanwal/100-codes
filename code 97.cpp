//55555
// 4444
//  333
//   22
//    1
#include<iostream>
using namespace std;
int main(){

	int n=5;
	int i,j,k;
	for(int i=n;i>=1;i--)
	{
	for(int j=n-1;j>=i;j--)
	{
	cout<<" ";
	}
	for(int k=1;k<=i;k++)
	{
	cout<<k;
	}
	cout<<endl;
	}
	return 0;
}