//0 1 0 1 0 
//1 0 1 0
//0 1 0
//1 0
//0
#include<iostream>
using namespace std;
int main(){

    for(int i=5;i>=1;i--)
    {
    for(int j=0;j<i;j++)
    {
    cout<<((i+j)%2)<<" ";
	}
	cout<<endl;
}
    return 0;
}