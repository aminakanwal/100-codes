//5
//44
//333
//2222
//11111
#include<iostream>
using namespace std;
int main(){
int n=5;
	for(int i=n;i>=1;i--)
	{
	for(int j=n;j>=i;j--)
	{
	cout<<i<<" ";
}
	cout<<endl;
}
	return 0;
}