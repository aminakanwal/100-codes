//factorial

#include<iostream>
using namespace std;
int main()
{
	int i,n;
	int count=0;
	cout<<"Enter a Number:";
	cin>>n;
	for(i=1;i<=n;i++)
{
    if(n%i==0)
	{
	count++;
	}
	}
	if(count==2)
	{
	cout<<n<<"is a Prime number:";
	}
	else
	{
	cout<<n<<"is not a Prime number:";
	}
	return 0;
}