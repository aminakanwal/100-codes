//1
//1 0
//1 0 1
//1 0 1 0
//1 0 1 0 1
#include<iostream>
using namespace std;
int main(){
    int n =5;
    for(int i=0;i<=n;i++){
	for(int j=0;j<=i;j++)
	{
	cout<<(j%2)<<" ";
	}
	cout<<endl;
}
return 0;
}