//EDCBA
//DCBA
//CBA
//BA
//A
#include<iostream>
using namespace std;
int main(){
int n=5;
    for(int i=1;i<=n;i++)
    {
    for(int j=1;j<=n-i+1;j++)
    {
    cout<<(char)(n-j+i+64);
	}
	cout<<endl;
}
    return 0;
}