//     1
//    22
//   333
//  4444
// 55555
#include<iostream>
using namespace std;
int main(){
int n=5;
int i,j,k;
    for(int i=1;i<=n;i++)
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