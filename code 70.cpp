//1 0 1 0 1
//0 1 0 1
//1 0 1
//0 1
//1
#include<iostream>
using namespace std;
int main(){

    for(int i=0;i<=4;i++)
    {
    for(int j=4;j>=i;j--)
    {
    cout<<(char)(i+65);
	}
	cout<<endl;
}
    return 0;
}