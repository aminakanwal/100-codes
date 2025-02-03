//A B C D E
//B C D E F
//C D E F G
//D E F G H
//E F G H I
#include<iostream>
using namespace std;
int main(){
	int n=5;int x;
	for(int i=0;i<n;i++)
	{
		x=i;
	for(int j=1;j<=n;j++)
	{
		x+=n;
	cout<<(char)(x-n+65)<<" ";
	}
	cout<<endl;
}
	return 0;
}