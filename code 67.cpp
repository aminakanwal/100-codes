//1 0 1 0 1  
//1 0 1 0 
//1 0 1
//1 0 
//1
#include<iostream>
using namespace std;
int main(){

    for(int i=5;i>=1;i--)
    {
    for(int j=0;j<=i;j++)
    {
    cout<<(j%2)<<" ";
	}
	cout<<endl;
}
    return 0;
}