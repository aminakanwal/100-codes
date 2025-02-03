//11111
//0000
//111
//00
//1
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
	for(int j=5;j>=i;j--)
	{
	cout<<(i%2)<<" ";
	}
	cout<<endl;
}
return 0;
}