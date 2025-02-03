//EDCBA
//DCBA
//CBA
//BA
//A
#include<iostream>
using namespace std;
int main(){
int n=5;
    for(int i=1;i<=5;i++)
    {
    for(int j=n-i;j>=0;j--)
    {
    cout<<(char)(j+65);
	}
	cout<<endl;
}
    return 0;
}